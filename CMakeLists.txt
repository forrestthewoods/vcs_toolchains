cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_COMPILER_ID "Clang")
set(CMAKE_C_COMPILER_ID "Clang")

if(WIN32)
    set(CMAKE_CXX_COMPILER "${CMAKE_SOURCE_DIR}/toolchains/win/LLVM/bin/clang++.exe")
    set(CMAKE_C_COMPILER "${CMAKE_SOURCE_DIR}/toolchains/win/LLVM/bin/clang++.exe")
    set(CMAKE_RC_COMPILER "${CMAKE_SOURCE_DIR}/toolchains/win/LLVM/bin/llvm-rc.exe")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -target x86_64-pc-windows-gnu")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -target x86_64-pc-windows-gnu")
    set(TARGET_TRIPLET "x86_64-pc-windows-gnu")

    include_directories(
        "${CMAKE_SOURCE_DIR}/toolchains/win/mingw64/lib/gcc/x86_64-w64-mingw32/12.2.0/include/c++"
        "${CMAKE_SOURCE_DIR}/toolchains/win/mingw64/lib/gcc/x86_64-w64-mingw32/12.2.0/include/c++/x86_64-w64-mingw32"
        "${CMAKE_SOURCE_DIR}/toolchains/win/mingw64/x86_64-w64-mingw32/include"
    )
    
    link_directories(
        "${CMAKE_SOURCE_DIR}/toolchains/win/mingw64/lib/gcc/x86_64-w64-mingw32/12.2.0"
        "${CMAKE_SOURCE_DIR}/toolchains/win/mingw64/x86_64-w64-mingw32/lib"
    )
elseif(UNIX)
    set(CMAKE_CXX_COMPILER "${CMAKE_SOURCE_DIR}/toolchains/linux/ubuntu/LLVM/bin/clang++")
    set(CMAKE_C_COMPILER "${CMAKE_SOURCE_DIR}/toolchains/linux/ubuntu/LLVM/bin/clang++")
    set(CMAKE_RC_COMPILER "${CMAKE_SOURCE_DIR}/toolchains/linux/ubuntu/LLVM/bin/llvm-rc")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -target x86_64-linux-gnu -stdlib=libc++")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -target xx86_64-linux-gnu")
    set(TARGET_TRIPLET "x86_64-linux-gnu")

    include_directories(
        "${CMAKE_SOURCE_DIR}/toolchains/linux/ubuntu/LLVM/include/c++/v1"
        "${CMAKE_SOURCE_DIR}/toolchains/linux/ubuntu/LLVM/include/x86_64-unknown-linux-gnu/c++/v1"
    )

    link_directories(
        "${CMAKE_SOURCE_DIR}/toolchains/linux/ubuntu/LLVM/lib/x86_64-unknown-linux-gnu"
        "/usr/lib/x86_64-linux-gnu"
    )
endif()

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fuse-ld=lld")

set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-Wno-pragma-pack)

set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(thirdparty/fmt)

add_executable(main sample_cpp_app/main.cpp)

target_link_libraries(main fmt::fmt)


# Deply DLLs
if(WIN32)
    set(DLL_ROOT "${CMAKE_SOURCE_DIR}/toolchains/win/mingw64/bin/")
    set(DLL_NAMES libstdc++-6.dll libgcc_s_Seh-1.dll libwinpthread-1.dll)

    foreach(DLL_NAME ${DLL_NAMES})
        add_custom_command(
            TARGET main POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${DLL_ROOT}/${DLL_NAME}"
            "$<TARGET_FILE_DIR:main>"
            COMMENT "Copying ${DLL_NAME} to executable directory"
        )
    endforeach()
endif()