#include "order.h"

hg01::order::order(
    hg01::order::id           id
,   hg01::order::action       action
,   hg01::order::placement    placement
,   hg01::market::id          market_id
) :   
    _id(id)
,   _action(action)
,   _placement(placement)
,   _market_id(market_id)
{
}

hg01::order::id hg01::order::get_id() const
{
    return _id;
}

hg01::order::action hg01::order::get_action() const
{   
    return _action;
}

hg01::order::placement hg01::order::get_placement() const
{
    return _placement;
}

