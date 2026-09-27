#include <iostream>
#include <cstdint>

int main() {

    std::uint8_t var1 = 0b0000'1010; // 10
    std::uint8_t var2 = 0b0000'1111; // 15
    // Swap:
    var1 ^= var2 ^= var1 ^= var2;
    // v1 = 0b0000'1010
    // v2 = 0b0000'1111
    // v1 = 0b0000'0101
    // v2 = 0b0000'1111
    // v2 = 0b0000'1010
    // v1 = 0b0000'0101
    // v1 = 0b0000'1111
    std::cout << "Var1: " << static_cast<int>(var1) << '\n'
    << "Var2: " << static_cast<int>(var2) << '\n';
    return 0;
}