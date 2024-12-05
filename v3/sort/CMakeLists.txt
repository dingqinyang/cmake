cmake_minimum_required(VERSION 3.0)

project(SORT_LIB)

aux_source_directory(./ SRC_LIST)
include_directories(${HEAD_PATH})

set(LIBRARY_OUTPUT_DIRECTORY ${LIB_PATH})

add_library(${SORT_LIB} SHARED  ${SRC_LIST})
