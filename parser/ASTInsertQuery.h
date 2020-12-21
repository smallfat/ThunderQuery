#pragma once

#include "IAST.h"
#include "../common/StringUtils.h"


class ASTInsertQuery : public IAST
{
public:
    ASTInsertQuery() = default;
    virtual ~ASTInsertQuery() = default;

public:
    ASTPtr _columns;
    ASTPtr _settings_ast;
    String format;

    const char* data;
    const char* end;

};

