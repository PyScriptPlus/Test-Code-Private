#include <iostream>

int main() {

    std::cout << "Enter number: ";
    int x;
    std::cin >> x;
    int i = 1;
    int factor = 1;
    while(i <= x)
    {
        factor *= i;
        i++;
    }

    std::cout << factor << '\n';
    return 0;
}