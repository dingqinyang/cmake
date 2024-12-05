cmake_minimum_required(VERSION 3.0)

project(test_project)

#设置相关变量
set(LIB_PATH ${CMAKE_CURRENT_BINARY_DIR}/lib)
set(HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(EXC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

set(SORT_LIB sort)
set(CAL_LIB cal)

set(APP1_NAME test1)
set(APP2_NAME test2)

add_subdirectory(cal)
add_subdirectory(sort)
add_subdirectory(test1)
add_subdirectory(test2)
