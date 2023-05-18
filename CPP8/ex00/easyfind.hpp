#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string.h>
#include <iostream>
#include <algorithm>

template <typename t_find>
void easyfind(t_find a, int b)
{
    std::vector<int>::iterator it;
    it = std::find(a.begin(), a.end(), b);
    if (it != a.end())
    {
        std::cout << "Element " << std::endl;
    }
    else
        std::cout << "Element not found." << std::endl;

    return ;
}

#endif