cmake_minimum_required(VERSION 3.20)
project(Setup)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

add_executable(application main.cpp)

include_directories(team-1-files)
add_subdirectory(team-1-files)
include_directories(team-2-files)
add_subdirectory(team-2-files)

#Replace here your teams library. Currently main is linked with team 1 library
target_link_libraries(application team_1_lib)

add_subdirectory(Google_tests)
