#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
    std::vector< char > retval(people.size());
	std::for_each(people.begin(), people.end(), [](Human &n) { n.birthday(); });
	std::transform(people.begin(), people.end(), retval.begin(), [](const Human &n) { return n.isMonster() ? 'n' : 'y'; });
	std::reverse(retval.begin(), retval.end());
    return retval;
}
