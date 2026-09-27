#include <iostream>
#include <bitset>

int main() {

    std::bitset<8> mybit = ((1 << 4) - 1) << 4;
    std::cout << mybit << '\n';
    
    return 0;
}