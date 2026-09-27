#include <iostream>

int main() {

    int x;
    std::cin >> x;

    if (x < 0)
    {
        std::cout << "Negative number entered.  Making positive.\n";
		x = -x;
    }
    
    std::cout << x << '\n';

    return 0;
}