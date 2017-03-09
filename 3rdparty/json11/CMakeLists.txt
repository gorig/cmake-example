cmake_minimum_required(VERSION 3.4)
project(json11)

set(json11_SOURCES src/json11.cpp)
set(json11_HEADERS include/json11.hpp)

add_library(json11 STATIC ${json11_SOURCES} ${json11_HEADERS})
target_include_directories(json11 PUBLIC include)
