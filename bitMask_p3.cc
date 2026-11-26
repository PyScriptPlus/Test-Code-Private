#include <iostream>
#include <cstdint>
#include <bitset>
#include <boost/dynamic_bitset.hpp>

// Man mikham ba yek mask chand ta bit ro dar nazar begiram
// Ba OR | kardan mask hayi ke ghablan sakhtim ham mishod vali
// In ravesh ham mishe baraye har 3 ravesh tozih midam

int main() {
    /*
    std::uint8_t flag = 0b0010'1010;

    // Binary Literal:
    // Har kodum khasti mituni 1 dar nazar begiri be hamin sadegi
    constexpr std::uint8_t binaryMask = 0b0100'1001;
    // Mikham barresi konim bebin bit hayi mikhaym kodumash 1(ON) hast
    std::cout << boost::dynamic_bitset<>(8,flag & binaryMask) << '\n';

    // HexaDecimal:
    // Bayad baraye in kar tabdil balad bashi
    constexpr std::uint8_t hexaMask = 0x2F; // 0010'1111
    std::cout << boost::dynamic_bitset<>(8,flag & hexaMask) << '\n';

    // Shift:
    // ((1 << Length) -1) << position
    constexpr std::uint8_t shiftMask = ((1 << 3)-1) << 2; // 0001'1100
    std::cout << boost::dynamic_bitset<>(8,flag & shiftMask) << '\n';

    */
    // 1010
    std::bitset<8> myBit = ((1 << 3) -3) << 1; // 0xA // 0b0000'1010 // 
    // 1000 - 1 = 0111 or 7;
    // 1000 - 2 = 0110
    // 1000 - 3 = 0101
    std::cout << myBit << '\n';

    return 0;
}