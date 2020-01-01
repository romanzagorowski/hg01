#pragma once

#include <stdint.h>
#include <string>

namespace hg01
{
    class market
    {
    public:
        typedef uint32_t id;

    public:
        market(id id, const std::string& symbol);

    public:
        id                  get_id    () const;
        const std::string&  get_symbol() const;

    private:
        id          _id;
        std::string _symbol;
    };
};

