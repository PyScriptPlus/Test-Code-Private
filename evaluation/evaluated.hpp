#ifndef EVALUATED_HPP
#define EVALUATED_HPP
#include <type_traits>

inline consteval int someFunc(int x) {
    if(std::is_constant_evaluated())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#endif