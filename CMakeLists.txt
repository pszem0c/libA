cmake_minimum_required(VERSION 3.25)
include(cmake/CPM.cmake)

CPMAddPackage("gh:pszem0c/libB@1.0.0")

project(libA)

set(CMAKE_CXX_STANDARD 20)

add_library(libA)

target_include_directories(libA PUBLIC include)

target_sources(libA PRIVATE src/libA.cpp)

target_link_libraries(libA PRIVATE libB)
