#include "market.h"

hg01::market::market(
    hg01::market::id        id
,   const std::string&      symbol
,   hg01::market::digits    digits
)
:   _id(id)
,   _symbol(symbol)
{
}

hg01::market::id hg01::market::get_id() const
{
    return _id;
}

const std::string& hg01::market::get_symbol() const
{
    return _symbol;
}

hg01::market::digits hg01::market::get_digits() const
{
    return _digits;
}

