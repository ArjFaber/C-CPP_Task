cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

project(Alpine_F1_Team_Assignment VERSION 1.0)

set(CMAKE_BUILD_TYPE Debug)

file(GLOB Src_Sources "src/*.cpp")
include_directories(include)
add_executable(main ${Src_Sources})





