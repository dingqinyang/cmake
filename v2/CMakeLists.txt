cmake_minimum_required(VERSION 3.0)

project(CALCULATOR)

#set(SRC_LIST add.cpp div.cpp main.cpp mult.cpp sub.cpp) #用SRC_LIST指代所有需要编译的源文件
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST) #aux_source_directory方式获取源文件
file(GLOB LIB_SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)  #在当前目录下创建bin目录，用于存放生成的可执行文件
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)



#add_library(calc STATIC ${SRC_LIST})
add_library(calc SHARED ${LIB_SRC_LIST}) #生成动态库

link_directories(${PROJECT_SOURCE_DIR}/lib)   #lib目录


add_executable(app ${SRC_LIST})

target_link_libraries(app calc)

