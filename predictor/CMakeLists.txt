add_library(predictor SHARED Predictor.cpp)
target_include_directories(predictor PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_link_libraries(predictor PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/libs/libcoreutils.a
)