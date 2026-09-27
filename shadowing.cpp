#include <iostream>

int apples = 10;
int main() {
    
    int apples = 4;
    {
        std::cout << apples << '\n';
        
        int apples = 5;
        std::cout << apples << '\n';
        std::cout << ::apples << '\n';
    }

    return 0;
}