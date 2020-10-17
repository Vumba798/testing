cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS -Og)

#TODO: change template word
project(template)

#TODO: change template word
add_executable(main
# TODO: enum your files and delete this comment
${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

#target_include_directories(template
#PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
#)


