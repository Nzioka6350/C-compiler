cmake_minimum_required(VERSION 3.27)
project(SimpleCompiler C)

set(CMAKE_C_STANDARD 11)

add_executable(SimpleCompiler global.h main.c lexer.c parser.c emitter.c symbol.c init.c error.c
)
