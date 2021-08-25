cmake_minimum_required(VERSION 3.5.1)
project(personal_code)
set(CMAKE_CXX_STANDARD 14)

add_executable(personal_code main.cpp data_struct.cpp)
target_link_libraries(personal_code -lpthread)
