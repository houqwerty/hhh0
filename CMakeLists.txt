cmake_minimum_required(VERSION 3.8)  # 指定CMake的最低版本为3.8
project(untitled12)  # 定义项目名称
include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)
add_executable(untitled12 main.cpp)  # 添加一个可执行文件，名为untitled12，源文件为main.cpp
target_link_libraries(untitled12 a)
