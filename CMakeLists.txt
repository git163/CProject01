cmake_minimum_required (VERSION 2.0)

project(cmake_project)

set(SRC_DIR "${CMAKE_CURRENT_LIST_DIR}/src")
set(MAIN_DIR "${SRC_DIR}/main")
set(INCLUDE_DIR "${SRC_DIR}/include")
aux_source_directory(${INCLUDE_DIR}, INCLUDE_DIR_FILES)
aux_source_directory(${MAIN_DIR}, SRC_FILES)

include_directories(${INCLUDE_DIR_FILES})
add_executable(hello ${SRC_FILES})