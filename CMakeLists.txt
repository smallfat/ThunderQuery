cmake_minimum_required(VERSION 3.17)
project(ThunderQuery)

set(CMAKE_CXX_STANDARD 20)

add_executable(ThunderQuery main.cpp parser/IAST.cpp parser/IAST.h parser/ASTInsertQuery.cpp parser/ASTInsertQuery.h common/StringUtils.h)