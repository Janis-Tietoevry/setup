#cmake_minimum_required(VERSION 3.20)
project(xx_tests)

set(CMAKE_CXX_STANDARD 17)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR}})

add_executable(team_1_tests_run XXTest.cpp)

target_link_libraries(team_1_tests_run team_1_lib)

target_link_libraries(team_1_tests_run gtest gmock gtest_main)
