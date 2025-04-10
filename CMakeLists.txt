# cmake_minimum_required(VERSION 3.10)
# project(coreutils)

# add_library(coreutils STATIC outlib/Player.cpp outlib/EventManager.cpp outlib/EventListener.cpp outlib/Publisher.cpp)
# target_compile_options(coreutils PRIVATE -fPIC)
# target_include_directories(coreutils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/outlib)


# set_target_properties(coreutils PROPERTIES
#     ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/predictor/libs
# )
# add_custom_command(TARGET coreutils POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/predictor/
#     COMMAND ${CMAKE_COMMAND} -E copy_if_different
#         ${CMAKE_CURRENT_SOURCE_DIR}/outlib/EventManager.h
#         ${CMAKE_CURRENT_SOURCE_DIR}/outlib/Event.h
#         ${CMAKE_CURRENT_SOURCE_DIR}/outlib/EventListener.h
#         ${CMAKE_CURRENT_SOURCE_DIR}/outlib/Publisher.h
#         ${CMAKE_CURRENT_SOURCE_DIR}/outlib/Player.h
#         ${CMAKE_CURRENT_SOURCE_DIR}/predictor/
# )




# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/predictor ${CMAKE_CURRENT_BINARY_DIR}/predictor_build)

# add_executable(main_exec main.cpp outlib/Player.cpp outlib/EventManager.cpp outlib/EventListener.cpp outlib/Publisher.cpp)
# target_include_directories(main_exec PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/outlib)



# target_link_libraries(main_exec PRIVATE  dl)

# # # Optional: install .a and headers
# # install(TARGETS coreutils ARCHIVE DESTINATION lib)
# # install(FILES EventManager.h EventListener.h DESTINATION include)


cmake_minimum_required(VERSION 3.10)
project(main_exec)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Only for header copy — not linking coreutils anywhere
add_custom_target(copy_headers ALL
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/predictor/
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_CURRENT_SOURCE_DIR}/outlib/EventManager.h
        ${CMAKE_CURRENT_SOURCE_DIR}/outlib/Event.h
        ${CMAKE_CURRENT_SOURCE_DIR}/outlib/EventListener.h
        ${CMAKE_CURRENT_SOURCE_DIR}/outlib/PredictorBase.h
        ${CMAKE_CURRENT_SOURCE_DIR}/outlib/Publisher.h
        ${CMAKE_CURRENT_SOURCE_DIR}/outlib/Player.h
        ${CMAKE_CURRENT_SOURCE_DIR}/predictor/
    COMMENT "Copying headers to predictor/"
)


# Build main binary with source files directly
add_executable(main_exec
    main.cpp
    outlib/Player.cpp
    outlib/EventManager.cpp
    outlib/EventListener.cpp
    outlib/Publisher.cpp
)

target_include_directories(main_exec PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/outlib)
target_link_libraries(main_exec PRIVATE dl)  # required for dlopen/dlsym
target_link_options(main_exec PRIVATE -rdynamic)  # allow symbol resolution from main binary
