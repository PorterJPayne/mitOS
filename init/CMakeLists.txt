cmake_minimum_required(VERSION 3.16)

project(mit-init C)

set(CMAKE_C_STANDARD 11)

add_executable(mit-init
    src/main.c
)

target_link_options(mit-init PRIVATE -static)
