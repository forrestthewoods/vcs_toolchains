import os
import subprocess
import sys

def get_last_access_times(dir_paths):
    access_times = {}
    for dir_path in dir_paths:
        for foldername, subfolders, filenames in os.walk(dir_path):
            for filename in filenames:
                file_path = os.path.join(foldername, filename)
                access_time = os.path.getatime(file_path)
                access_times[file_path] = access_time
    return access_times

def format_bytes(byte_num):
    suffixes = ['B', 'KB', 'MB', 'GB', 'TB', 'PB', 'EB', 'ZB', 'YB']
    i = 0
    while byte_num >= 1024 and i < len(suffixes) - 1:
        byte_num /= 1024.0
        i += 1
    return f"{byte_num:.2f} {suffixes[i]}"

def main():
    try:
        cwd = os.getcwd()
        print(f"Working dir 👷‍♂️: {cwd}")

        print("Environment variables... 🌎")
        for key, value in os.environ.items():
            print(f"    {key} = {value}")

        root = os.environ.get("SCRIPT_DIR")

        # Get initial file access times
        print("\nChecking initial file access times... 🥸👨‍🔬🔬")
        relevant_dirs = [f"{root}sample_cpp_app", f"{root}toolchains"]
        initial_access_times = get_last_access_times(relevant_dirs)

        # Compile main.cpp into main.exe
        print("\nBuilding... 👷‍♂️💪🛠️")
        os.makedirs('build', exist_ok=True)
# '
        cmd = [ 
            f'{root}toolchains\\win\\cmake\\bin\\cmake.exe',
            '-G',
            'Ninja',
            '-D',
            f'CMAKE_MAKE_PROGRAM={root}toolchains/win/ninja/ninja.exe',
            '..'
        ]
        print(f"    Build cmd: [{' '.join(cmd)}]")
        result = subprocess.run(cmd, text=True, check=True)
        if result.returncode != 0:
            print(f"    Unexpected error [{result}]")
            print(f"Compile failed. 😭")
            sys.exit(1)

        cmd = [ 
            f'{root}toolchains\\win\\cmake\\bin\\cmake.exe',
            '--build',
            '.'
        ]
        print(f"    Build cmd: [{''.join(cmd)}]")
        result = subprocess.run(cmd, text=True, check=True)
        if result.returncode != 0:
            print(f"    Unexpected error [{result}]")
            print(f"Compile failed. 😭")
            sys.exit(1)

        print("Compile success! 😁")

        # Get new file access times and print stats
        print("\nChecking new file access times... 🥸👨‍🔬🔬")
        updated_access_times = get_last_access_times(relevant_dirs)

        touched_files = 0
        touched_bytes = 0
        untouched_files = 0
        untouched_bytes = 0

        for file_path, initial_time in initial_access_times.items():
            updated_time = updated_access_times.get(file_path)
            if updated_time and updated_time != initial_time:
                touched_files += 1

                file_size = os.path.getsize(file_path)
                touched_bytes += file_size

                if file_size > 1024*1024:
                    print(f"Touched file {file_path} [{format_bytes(file_size)}]")

            elif updated_time:
                untouched_files += 1
                untouched_bytes += os.path.getsize(file_path)

        print(f"File Access Stats")
        print(f"    Touched {touched_files} files. Total Size: {format_bytes(touched_bytes)}")
        print(f"    Untouched {untouched_files} files. Total Size: {format_bytes(untouched_bytes)}")
        
        touched_file_percent = "{:.1f}".format(float(touched_files) / float(touched_files + untouched_files)*100)
        touched_bytes_percent = "{:.1f}".format(float(touched_bytes) / float(touched_bytes + untouched_bytes)*100)
        print(f"    Touched {touched_file_percent}% of files")
        print(f"    Touched {touched_bytes_percent}% of bytes")

    except Exception as e:
        print(f"    Unexpected exception: {e}")
        print(f"Compile failed. 😭")
        sys.exit(1)

    print("\nRunning program...")
    target_exe = os.path.join(cwd, f"{root}bin\\main.exe")
    print(f"    Target exe: {target_exe}\n")
    result = subprocess.run([target_exe], text=True, check=True)
    if result.returncode != 0:
        print(f"    Unexpected error [{result}]")
        print(f"    Failed to run output exe. 😭")
        sys.exit(1)

    print(f"\nBuilt and ran successfully! 😍")

    sys.exit(0)

if __name__ == "__main__":
    main()