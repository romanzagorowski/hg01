#pragma once

#include "market.h"

#include <stdint.h>

namespace hg01
{
    class order
    {
    public:
        typedef uint64_t id;

        enum class action
        {
            buy  =  1
        ,   sell = -1
        };

        enum class placement
        {
               at_market =  0
        ,   above_market =  1
        ,   below_market = -1
        };

    public:
        order(id id, action action, placement placement, market::id market_id);

    private:
        id          _id;
        action      _action;
        placement   _placement;
        market::id  _market_id;

    public:
        id        get_id       () const;
        action    get_action   () const;
        placement get_placement() const;
    };
};

