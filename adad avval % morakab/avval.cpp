#include <iostream>

int main() {

    std::cout << "Enter num: ";
    int x;
    std::cin >> x;

    int i = 1;
    int checkNum = 0;
    condition:if (x < i)
    {
        goto check;
    }
    if(x % i == 0)
    {
        std::cout << i << '\n';
        checkNum += 1;
    }
    i++;
    goto condition;
    check:if(checkNum == 2)
    {
        std::cout << "Your number: " << x << " Is First Number\n";
    }
    else
    {
        std::cout << "Your number: " << x << " Is Morakab Number\n";
    }

    return 0;
}