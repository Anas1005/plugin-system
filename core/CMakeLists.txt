cmake_minimum_required(VERSION 3.10)
project(coreutils)

add_library(coreutils STATIC EventManager.cpp Publisher.cpp)
target_include_directories(coreutils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# # Optional: install .a and headers
# install(TARGETS coreutils ARCHIVE DESTINATION lib)
# install(FILES EventManager.h EventListener.h DESTINATION include)
