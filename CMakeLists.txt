# Set the minimum required version of cmake for this project
cmake_minimum_required(VERSION 3.26)

# Set the C standard
set(CMAKE_C_COMPILER_ID "Clang")
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Set the CXX standard
set(CMAKE_CXX_COMPILER_ID "Clang")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Debug/Release
set(CMAKE_BUILD_TYPE Debug)

if(UNIX)
    # Specify toolchain paths
    set(CMAKE_C_COMPILER "${CMAKE_SOURCE_DIR}/toolchains/linux/scripts/zig_cc")
    set(CMAKE_CXX_COMPILER "${CMAKE_SOURCE_DIR}/toolchains/linux/scripts/zig_cxx")
    set(CMAKE_AR "${CMAKE_SOURCE_DIR}/toolchains/linux/scripts/zig_ar")
    set(CMAKE_RANLIB "${CMAKE_SOURCE_DIR}/toolchains/linux/scripts/zig_ranlib")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Dependencies
add_subdirectory(thirdparty/fmt)

# Define project
project(HelloWorld)
add_executable(main sample_cpp_app/main.cpp)
target_link_libraries(main fmt::fmt)



#add_executable(main sample_cpp_app/simple.c)