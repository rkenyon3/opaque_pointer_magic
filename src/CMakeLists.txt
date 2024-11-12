cmake_minimum_required(VERSION 3.20)

project(magic)

add_executable( magic
                client_main.c
                magic.cpp)

target_link_libraries(magic)
