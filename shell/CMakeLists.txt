cmake_minimum_required(VERSION 3.16)

project(mit-shell C)

set(CMAKE_C_STANDARD 11)

add_executable(mit-shell
    src/main.c
)

target_link_options(mit-shell PRIVATE -static)
