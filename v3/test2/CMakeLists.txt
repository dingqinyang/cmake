cmake_minimum_required(VERSION 3.0)

project(test2_project)

aux_source_directory(./ SRC_LIST)
include_directories(${HEAD_PATH})
link_directories(${LIB_PATH})

set(EXECUTABLE_OUTPUT_PATH ${EXC_PATH})
add_executable(${APP2_NAME} ${SRC_LIST})

target_link_libraries(${APP2_NAME} ${SORT_LIB})