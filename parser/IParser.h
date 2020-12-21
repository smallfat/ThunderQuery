#pragma once

#include <set>
#include "IAST.h"
#include "../common/Common.h"

struct Expected
{
    const char* max_parsed_pos = nullptr;
    std::set<const char*> variants;
};

class IParser
{
public:
    virtual bool parse(Pos pos, ASTPtr &node, Expected &expected) = 0;
    virtual bool parseImpl(Pos pos, ASTPtr &node, Expected &expected) = 0;

    template<typename F>
    static bool wrapParseImpl(Pos & pos, const F & func)
    {
        Pos begin = pos;
        pos ++;
        bool res = func();
        pos --;
        if (!res)
            pos = begin;
        return res;
    }
};

