cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(my_unique_ptr)

set(SRC_LIST
    main.cpp
)

add_executable(${PROJECT_NAME} ${SRC_LIST})
add_compile_options(${PROJECT_NAME} -Wall -Wextra)
