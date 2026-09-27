#include <iostream>
#include <vector>

int main() {

    int num = 0;
    switch(num)
    {
        case 1 > 2:
        std::cout << "Zero\n";
            break;
        case 1 < 2:
        std::cout << "One" << '\n';
            break;
        default:
        std::cout << "None\n";
    }

    return 0;
}