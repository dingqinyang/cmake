cmake_minimum_required(VERSION 3.0)

project(test1_project)

aux_source_directory(./ SRC_LIST)
include_directories(${HEAD_PATH})
link_directories(${LIB_PATH})
link_libraries(${CAL_LIB})

set(EXECUTABLE_OUTPUT_PATH ${EXC_PATH})
add_executable(test1 ${SRC_LIST})

