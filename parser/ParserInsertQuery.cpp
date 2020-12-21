#include "ParserInsertQuery.h"

bool ParserInsertQuery::parse(Pos pos, ASTPtr &node, Expected &expected)
{
    return wrapParseImpl(pos, [&] {
        bool res = parseImpl(pos, node, expected);
        if (!res)
            node = nullptr;

        return res;
    });
}

bool ParserInsertQuery::parseImpl(Pos pos, ASTPtr &node, Expected &expected)
{

}