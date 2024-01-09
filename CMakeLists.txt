#[[
    CMake Project Template for C programming, can easily be converted to C++

]]

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "") # works

cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)
project(MyApp C)

set(BUILD_TYPE Debug)

set(CMAKE_BUILD_TYPE ${BUILD_TYPE})

set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/project/src/)

set(
    PROJECT_SOURCES
    ${SOURCE_DIR}main.c
    ${SOURCE_DIR}Token.c
)


include_directories(${PROJECT_SOURCE_DIR}/includes)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
target_include_directories(MyApp PRIVATE includes)
target_include_directories(MyApp PRIVATE src)

file(CREATE_LINK "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json" "compile_commands.json" SYMBOLIC)
