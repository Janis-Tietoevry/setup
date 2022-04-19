cmake_minimum_required(VERSION 3.20)
project(Setup)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

add_executable(application main.cpp)
add_executable(application2 main-2.cpp)
add_executable(application3 main-3.cpp)

include_directories(team-1-files)
add_subdirectory(team-1-files)
include_directories(team-2-files)
add_subdirectory(team-2-files)
include_directories(team-3-files)
add_subdirectory(team-3-files)

#Replace here your teams library. Currently main is linked with team 1 library
target_link_libraries(application team_1_lib)
target_link_libraries(application2 team_2_lib)
target_link_libraries(application3 team_3_lib)

add_subdirectory(Google_tests)
