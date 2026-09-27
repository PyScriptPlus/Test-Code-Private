#include <iostream>

int main() {

    std::cout << 0b1111'1111 << '\n';
    // std::cout << (-9223372036854775808LL) << '\n';
    long long int d = -(9223372036854775807) - 1;
    std::cout << d << '\n';

    // __int128 ddw;

    char myName[] = {'a', 'd'};
    int num[] = {1, 2, 3};
    std::cout << myName << '\n';
    std::cout << num << '\n';
    return 0; 
}