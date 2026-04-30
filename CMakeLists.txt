cmake_minimum_required(VERSION 4.1)
project(My_Lib C)

set(CMAKE_C_STANDARD 11)

add_library(My_Lib STATIC
        src/MyLib.c)

target_include_directories(My_Lib PUBLIC src)

add_executable(test_app
        test/test.c
)

target_link_libraries(test_app My_Lib)