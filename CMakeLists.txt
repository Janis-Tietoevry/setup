#cmake_minimum_required(VERSION 3.20)
project(Setup)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

add_executable(Xx_run main.cpp)

include_directories(xx_files)
add_subdirectory(xx_files)

target_link_libraries(Xx_run xx_lib)

add_subdirectory(Google_tests)
