cmake_minimum_required(VERSION 3.20)

project(island-miner)

message("Including Libraries.")
include(cmake/sfml.cmake)

set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
file(GLOB_RECURSE SRC_FILES
    "${SRC_DIR}/**.hpp"
    "${SRC_DIR}/**.cpp"
)

add_executable(${PROJECT_NAME} ${SRC_FILES})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 23)

target_precompile_headers(${PROJECT_NAME} PUBLIC "${SRC_DIR}/common.hpp")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

target_include_directories(${PROJECT_NAME} PRIVATE
    "${SRC_DIR}"
)

target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics sfml-system sfml-window)
