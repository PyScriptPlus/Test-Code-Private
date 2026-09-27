#include <iostream>

int main() {

    std::cout << "Enter: ";
    int x;
    std::cin >> x;
    int i = 1;
    int sum = 0;
    perfect:if(x % i == 0)
    {
        std::cout << sum << " + " << i;
        sum = sum + i;
        std::cout << " = " << sum << '\n';
    }
    i++;
    if(x > i)
    {
        goto perfect;
    }
    if(x == sum)
    {
        std::cout << "Number is perfect: " << x << '\n';
    }
    else
    {
        std::cout << "Number not is Perfect!\n";
    }

    return 0;
}