#include <iostream>
#include "circle.hpp"

int main() {

    std::cout << "Enter your radius: ";
    double radius;
    std::cin >> radius;
    
    double result = (2.0 * radius * circle::pi);
    std::cout << "The circle circumference is: "
            << result << '\n';


    std::cin.get();
    return 0;
}