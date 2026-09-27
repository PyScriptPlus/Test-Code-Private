#include <iostream>
#include <iomanip>
#include <random>
#include <chrono>

int main() {

    std::mt19937 mt{static_cast<unsigned int>(std::chrono::steady_clock::now().time_since_epoch().count())};
    std::bernoulli_distribution bools;  
    std::uniform_real_distribution<double> ashari{0.0,2.0};
    double y;
    std::cout << std::setprecision(4);
    while(ashari(mt) != 2.0)
    {
        for(int i = 1; i <= 20; ++i)
        {
            std::cout << ashari(mt) << '\t';
            if(i % 2 == 0)
                std::cout << '\n';
        }
    }
    // std::cout << std::boolalpha;
    // std::cout << bools(mt);


    return 0;
}