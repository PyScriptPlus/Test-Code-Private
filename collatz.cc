#include <iostream>

int main() {

    long long x = 1200000;
    while(x != 1)
    {
        if(x % 2 == 0)
        {
            x /= 2;
        }
        else
        {
            x = x * 3 + 1;
        }
        std::cout << x << '\n';
    }
    std::cout << x << '\n';
    

    return 0;
}