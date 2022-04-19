#cmake_minimum_required(VERSION 3.20)
project(team_3_tests)

set(CMAKE_CXX_STANDARD 17)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR}})

add_executable(team_3_tests_run XXTest.cpp)

target_link_libraries(team_3_tests_run team_3_lib)

target_link_libraries(team_3_tests_run gtest gmock gtest_main)
