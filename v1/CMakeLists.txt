cmake_minimum_required(VERSION 3.0)

project(CALCULATOR)
#set(SRC_LIST add.cpp div.cpp main.cpp mult.cpp sub.cpp) #用SRC_LIST指代所有需要编译的源文件
include_directories(${PROJECT_SOURCE_DIR}/include)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)  #在当前目录下创建bin目录，用于存放生成的可执行文件

add_executable(app ${SRC_LIST})
