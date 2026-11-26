#include <iostream>
#include <cstdint>
#include <bitset>

// Two's Complement: (متمم دو)

// Hatman Type bayad signed bashe ta in kar kone
// MSB: 0 mishe mosbat
// MSB: 1 mishe manfi

int main() {

    // Inam ravesh manfi kardaneshe
    std::int8_t numberTen = 0b0000'1010; // 10
    numberTen = ~numberTen; // 1111'0101
    numberTen += 0b0000'0001;
    // 1111'0101
    // 0000'0001
    // 1111'0110
    std::cout << std::bitset<8>(numberTen) << '\n';
    std::cout << static_cast<int>(numberTen) << '\n'; // -10

    // Haminjuri nemishe !!!
    // Bayad marahel ro tey koni
    std::int16_t ten = 0b1111'0110;
    std::cout << static_cast<int>(ten) << '\n';

    return 0;
}