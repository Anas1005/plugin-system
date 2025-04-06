cmake_minimum_required(VERSION 3.10)
project(main_exec)

add_executable(main_exec main.cpp)

# Add include + link paths to your manually copied files
target_include_directories(main_exec PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(main_exec PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/libs/libcoreutils.a dl)
