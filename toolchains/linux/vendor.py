import subprocess
import os
import sys
import shutil

def get_dependencies(package_name):
    """Get all dependencies of a package."""
    try:
        dependencies = subprocess.check_output(['apt-rdepends', package_name], text=True)
        return [line.split()[0] for line in dependencies.splitlines() if not line.startswith(' ')]
    except subprocess.CalledProcessError as e:
        print(f"Error fetching dependencies for {package_name}: {e}")
        return []

def download_package(package, download_dir):
    """Download a package to a specific directory."""
    try:
        subprocess.run(['apt-get', 'download', package], check=True, cwd=download_dir)
    except subprocess.CalledProcessError as e:
        print(f"Error downloading {package}: {e}")

def extract_packages(download_dir, extract_dir):
    """Extract all downloaded packages."""
    for deb_file in os.listdir(download_dir):
        if deb_file.endswith('.deb'):
            deb_path = os.path.join(download_dir, deb_file)
            try:
                subprocess.run(['dpkg-deb', '-x', deb_path, extract_dir], check=True)
            except subprocess.CalledProcessError as e:
                print(f"Error extracting {deb_file}: {e}")

def main(package_names):
    download_dir = "downloads"
    extract_dir = "vendor"

    # Delete old content
    shutil.rmtree(extract_dir)

    # Create directories
    os.makedirs(download_dir, exist_ok=True)
    os.makedirs(extract_dir, exist_ok=True)

    for package_name in package_names:
        print(f"Processing {package_name}")
        dependencies = get_dependencies(package_name)
        all_packages = [package_name] + dependencies

        for package in all_packages:
            download_package(package, download_dir)

    extract_packages(download_dir, extract_dir)

    # Cleanup: delete the downloads directory
    shutil.rmtree(download_dir)

if __name__ == "__main__":
    packages = ["libc6-dev", "libc6", "gcc", "gcc-s1"]
    main(packages)
