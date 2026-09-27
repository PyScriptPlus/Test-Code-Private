#include <iostream>
#include <random>
#include <chrono>
#include <cstdlib>
#include <time.h>

#define NULLS ((void *)0)

int main() {

    std::cout << time(NULL) << '\n';

    std::mt19937 mmd;
    std::uniform_int_distribution op{1};
    // std::cout << op(mmd) << '\n';

    std::uniform_int_distribution dice{1, 6};
    for (int i = 1; i <= 20; i++)
    {
        std::cout << dice(mmd) << '\t';
        if(i % 10 == 0) 
        {
            std::cout << '\n';
        }
    }
    

    return 0;
}