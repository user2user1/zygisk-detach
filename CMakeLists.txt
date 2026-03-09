cmake_minimum_required(VERSION 3.10)
project(zygisk_module)

add_library(mymodule SHARED src/module.cpp)

target_include_directories(mymodule PRIVATE ${CMAKE_SOURCE_DIR}/include)

set_target_properties(mymodule PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)