cmake_minimum_required (VERSION 2.7)

project(cmake_project)

set(SRC_DIR "${CMAKE_CURRENT_LIST_DIR}/src")
set(MAIN_DIR "${SRC_DIR}/main")
set(INCLUDE_DIR "${SRC_DIR}/include")

file(GLOB INCLUDE_DIR_FILES "${INCLUDE_DIR}/*.h")
file(GLOB SRC_FILES "${MAIN_DIR}/*.cpp")

include_directories(${INCLUDE_DIR_FILES})

message("==${INCLUDE_DIR_FILES}==\n")
message("==${SRC_FILES}==\n")
add_executable(hello ${SRC_FILES})