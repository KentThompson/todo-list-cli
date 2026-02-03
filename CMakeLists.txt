cmake_minimum_required(VERSION 3.20)
project(cpp_tool LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp_tool
    src/main.cpp
    src/cli.cpp
)

target_include_directories(cpp_tool
    PRIVATE include
)
