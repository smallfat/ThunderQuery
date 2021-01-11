#pragma once

#include "IParser.h"

class ParserKeyword : public IParser {
public:
    ParserKeyword() = default;

    bool parse(Pos pos, ASTPtr & node, Expected & expected) override;
private:

};


