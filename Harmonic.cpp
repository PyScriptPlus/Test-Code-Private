#include <iostream>

int main() {

    std::cout << "Enter number: ";
    double x;
    std::cin >> x;
    double i = 1;
    double sum = 0;
    while(i <= x)
    {
        sum += 1 / i;
        i++;
    }
    std::cout << sum << '\n';
    
    return 0;
}