#include <iostream>
#include <cstdint>

int main() {

    // 0000'1001
    // 0000'1100
    std::uint8_t bit1 = 0b0000'1001;
    std::uint8_t bit2 = 0b0000'1100;
    bit1 |= (bit2 << 1);
    std::cout << static_cast<int>(bit1) << '\n';
    // 0000'1001
    // 0001'1000
    // 0001'1001 --> 25


    int y = 015;
    std::cout << y << '\n';
    

    return 0;
}