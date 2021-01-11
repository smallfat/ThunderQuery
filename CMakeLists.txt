cmake_minimum_required(VERSION 3.16)
project(ThunderQuery)

set(CMAKE_CXX_STANDARD 20)

add_executable(ThunderQuery main.cpp parser/IAST.cpp parser/IAST.h parser/ASTInsertQuery.cpp parser/ASTInsertQuery.h common/StringUtils.h parser/IParser.cpp parser/IParser.h parser/ParserInsertQuery.cpp parser/ParserInsertQuery.h common/Common.h parser/ParserKeyword.cpp parser/ParserKeyword.h)