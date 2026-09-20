cmake_minimum_required(VERSION 3.16)
project(cpp_ast_complexity_analyzer VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(ast_analyzer 
    src/main.cpp 
    src/ASTVisitor.cpp
)
