@echo off
SETLOCAL
rem Clear all environment variables
for /f "tokens=1 delims==" %%i in ('set') do (
    rem echo %%i
    set %%i=
)
set

REM Allow a very primitive path
set PATH=C:\Windows\System32;

REM Create SCRIPT_DIR var
set "SCRIPT_DIR=%~dp0"

REM Nuke old
rmdir /s /q bin 
rmdir /s /q build 

REM Recreate build directory
mkdir build
pushd build

REM Run cmake and build with the bundled binaries.
REM..\toolchains\win\cmake\bin\cmake.exe -G "Ninja" -D CMAKE_MAKE_PROGRAM=%SCRIPT_DIR%toolchains\win\ninja\ninja.exe ..
REM..\toolchains\win\cmake\bin\cmake.exe --build . 

..\toolchains\win\Python311\python.exe ..\build.py

popd

REM Run exe
REM bin\main.exe

ENDLOCAL