#specify minimum cmake versio needed
cmake_minimum_required(VERSION 3.10)

#set up the project
project(project_01)

#set the c++ VERSION
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

#Include dirs
include_directories(${PROJECT_SOURCE_DIR}/include/project_01)

#Include PROJECT_SOURCE_DIR
set(SOURCES
 ${PROJECT_SOURCE_DIR}/src/main.cpp
 ${PROJECT_SOURCE_DIR}/src/sum.cpp
)

#Add exe
add_executable(project_01 ${SOURCES})

#Add tests
enable_testing()
add_executable(test_sum ${PROJECT_SOURCE_DIR}/tests/test_sum.cpp ${PROJECT_SOURCE_DIR}/src/sum.cpp)
add_test(NAME test_sum COMMAND test_sum)
