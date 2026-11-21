#include <iostream>
#include <cstdint>
#include <boost/dynamic_bitset.hpp>

int main() {

    // Modern:
    boost::dynamic_bitset<> myBit (3,0b011);
    std::cout << (myBit << 2) << '\n';
    myBit.resize(4);
    std::cout << (~(myBit << 2)).to_ulong() << '\n'; // 0011



    // Old:
    std::uint8_t bit = 0b0000'1010;
    std::uint8_t bit2 = 0b0000'0101;
    
    std::cout << std::hex;
    std::cout << (bit | bit2) << '\n'; // F
    std::cout << (bit ^ bit2) << '\n'; // F
    std::cout << (bit xor bit2) << '\n'; // F
    
    // Hybrid
    std::cout << ((bit | bit2) << (bit ^ bit2)) << '\n'; // 1111 << 1111
    std::cout << ((bit | bit2) << (bit & bit2)) << '\n'; // 1111 << 0

    // Low level :D
    bit &= ((bit | bit2) << (bit & bit2));
    std::cout << std::dec;
    std::cout << static_cast<int>(bit) << '\n'; // 10


    return 0;
}