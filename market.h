#pragma once

#include <stdint.h>
#include <string>

namespace hg01
{
    class market
    {
    public:
        typedef uint32_t id;
        typedef uint8_t  digits;

    public:
        market(id id, const std::string& symbol, digits digits);

    public:
        id                  get_id    () const;
        const std::string&  get_symbol() const;
        digits              get_digits() const;

    private:
        id          _id;
        std::string _symbol;
        digits      _digits;
    };
};

