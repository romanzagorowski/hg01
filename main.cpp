#include "order.h"

int main()
{
    const hg01::market market { 2, "USDPLN", 4 };

    const hg01::order order { 1, hg01::order::action::sell, hg01::order::placement::above_market, market.get_id() };

    hg01::order::action action = order.get_action();

    return (int)action;
}

