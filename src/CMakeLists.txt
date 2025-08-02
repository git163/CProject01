add_library(loglib "")

include("${CMAKE_CURRENT_LIST_DIR}/log/CMakelists.txt")


add_executable(hello "${CMAKE_CURRENT_LIST_DIR}/main.cpp")

target_link_libraries(hello 
	PUBLIC
	loglib
)