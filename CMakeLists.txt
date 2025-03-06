cmake_minimum_required(VERSION 3.20)

project(2d-arrays)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_GENERATOR Ninja)

set(MAIN src/main.cpp)

file(GLOB_RECURSE MODULES src/modules/*.cpp)
file(GLOB_RECURSE UTILS src/utils/*.cpp)

add_executable(${PROJECT_NAME} ${MAIN} ${MODULES} ${UTILS})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src)