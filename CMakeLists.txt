cmake_minimum_required(VERSION 3.10)

project(tinker02)

include_directories(include)

add_executable(tinker02 src/main.cpp lib/6502.cpp)

target_link_libraries(${PROJECT_NAME} raylib)

set(CMAKE_CXX_VERSION 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)