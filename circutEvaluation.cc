#include <iostream>
#include <ciso646>

int main() {

    bool mamad = true;
    int x = 6, y = 3;
    if(!(x != y || (2 == 1 && mamad and false))) 
        std::cout << std::boolalpha << true << '\n';
    else
        std::cout << std::boolalpha << false << '\n';


    std::cout << ((10.0 / 0.0) > 1) << '\n';
    std::cout << (10.0 / 0.0);

    return 0;
}