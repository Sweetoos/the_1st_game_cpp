cmake_minimum_required(VERSION 3.20)
project(run)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(run ${SRC_FILES})
target_include_directories(run PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)