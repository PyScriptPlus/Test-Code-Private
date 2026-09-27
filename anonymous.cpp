#include <iostream>

void print();

namespace {
    int hello() {
        return 5;
    }
}

int main() {

    std::cout << hello() << '\n';
    // print();
    std::cout << "\u001b[1m" << "\e[32m" << "I'am MohammaD" << "\e[0m" << '\n';

    std::cin.get();
    return 0;
}