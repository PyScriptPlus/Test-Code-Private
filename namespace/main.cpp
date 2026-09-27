#include <iostream>
#include "growth.hpp"
#include "circle.hpp"

namespace Math{
    int pows(int y);
}

int main() {

    int num = doMath::add(4, 3);
    int num2 = doMath::mines(4, 3);
    std::cout << num << '\n' << num2 << '\n';
    std::cout << Math::pows(8) - 1;

    return 0;
}