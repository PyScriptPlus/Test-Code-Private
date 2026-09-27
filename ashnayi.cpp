#include <iostream>
#include <cstdlib>


int main() {

    srand(time(0));
    halghe:
    int number = rand() % 8;

    switch(number)
    {
        case 1:
        std::cout << "One\n";
        break;
        case 2:
        std::cout << "Two\n";
        break;
        case 3:
        case 4:
        std::cout << "Four or Three\n";
        break;
        case 5:
        break;
        default:

        break;
    }
    goto halghe;
    return 0;
}