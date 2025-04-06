cmake_minimum_required(VERSION 3.10)
project(shared_lib)

add_library(predictor SHARED Predictor.cpp)
target_include_directories(predictor PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(predictor PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/libs/libcoreutils.a)

# add_executable(predictor_exec main.cpp)
