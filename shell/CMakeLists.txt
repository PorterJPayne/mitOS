cmake_minimum_required(VERSION 3.16)

project(mit-shell C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(mit-shell
    src/main.c
    src/commands.c
)

target_link_options(mit-shell PRIVATE -static)
