#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > animallover;
    std::list< Human >::iterator it = people.end();
    std::for_each(people.begin(), people.end(), [](Human& pers) { pers.birthday(); });
    std::for_each(people.rbegin(), people.rend(), [&](Human& pers) { (pers.isMonster()) ? animallover.push_back('n') : animallover.push_back('y'); });
    return (animallover);
}

