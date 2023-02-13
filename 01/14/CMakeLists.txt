cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)

add_executable(a.out main.cpp)

find_package(fmt REQUIRED)

find_package(gtest REQUIRED)

target_link_libraries(a.out PUBLIC fmt::fmt)
