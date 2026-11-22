#include <iostream>
#include <cstdint>
#include <bitset>

namespace mask {
    // Mituni baraye sakhtan Mask az bitset ham estefade koni
    // In ravesh ghadimie zaman C hast
    constexpr std::uint8_t bitMask0 = 1 << 0;
    constexpr std::uint8_t bitMask1 = 1 << 1;
    constexpr std::uint8_t bitMask2 = 1 << 2;
    constexpr std::uint8_t bitMask3 = 1 << 3;
    constexpr std::uint8_t bitMask4 = 1 << 4;
    constexpr std::uint8_t bitMask5 = 1 << 5;
    constexpr std::uint8_t bitMask6 = 1 << 6;
    constexpr std::uint8_t bitMask7 = 1 << 7;
}

int main() {

    std::uint8_t myBit = 0b0001'1010;

    // test() old method: &
    std::cout << "bit position 1: " << std::bitset<8>(myBit & mask::bitMask1) << '\n';
    std::cout << "bit position 2: " << std::bitset<8>(myBit & mask::bitMask2) << '\n';
    std::cout << "bit position 4: " << std::bitset<8>(myBit & mask::bitMask4) << '\n';

    // set() old method: |
    myBit |= mask::bitMask0;
    std::cout << "bit position 0: " << std::bitset<8>(myBit & mask::bitMask0) << '\n';
    // set kardan bishtar az 1 bit
    myBit |= (mask::bitMask5 | mask::bitMask6 | mask::bitMask7);
    std::cout << "Show myBit: " << std::bitset<8>(myBit) << '\n';

    // reset() old method: & with ~
    myBit &= ~mask::bitMask0;
    std::cout << "bit position 0: " << std::bitset<8>(myBit & mask::bitMask0) << '\n';

    // flip() old method: ^
    myBit ^= mask::bitMask0;
    std::cout << "bit position 0: " << std::bitset<8>(myBit & mask::bitMask0) << '\n';
    
    // Baraye hamashun baz mituni
    // Az ravesh bala baraye set kardan bishtar az 1 bit estefade koni
    // (mask::bitMask5 | mask::bitMask6 | mask::bitMask7);

    return 0;
}