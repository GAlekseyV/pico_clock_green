cmake_minimum_required(VERSION 3.13)

# initialize the SDK directly
include(pico_sdk_import.cmake)

project(pico_green_clock C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project
add_subdirectory(src)