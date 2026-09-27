#include <iostream>

int main() {

    std::cout << "Enter number: ";
    int x;
    std::cin >> x;

    int i = 1;
    algor:if(x % i == 0)
    {
        std::cout << i << '\n';
    }
    if(x >= i)
    {
        i++;
        goto algor;
    }
    else
    {
        return 0;
    }

    return 0;
}