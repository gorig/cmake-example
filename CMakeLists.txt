cmake_minimum_required(VERSION 3.4)
project(piezo)

set(CMAKE_CXX_STANDARD 11)
option(BUILD_TESTS "Build unit tests" OFF)
include(piezo-config.local.cmake OPTIONAL)

add_subdirectory(app)
add_subdirectory(lib)
