#pragma once

#include "IAST.h"

#include <common/StringUtils.h>

class ASTInsertQuery : public IAST
{
public:
    ASTPtr _columns;
    ASTPtr _settings_ast;
    String format;
};

