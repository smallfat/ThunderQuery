#pragma once

#include "IParser.h"

class ParserInsertQuery : public IParser
{
public:
    virtual bool parse(Pos pos, ASTPtr &node, Expected &expected) override;

    virtual bool parseImpl(Pos pos, ASTPtr &node, Expected &expected) override;
};
