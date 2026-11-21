#include <iostream>
#include <bitset>
#include <boost/dynamic_bitset.hpp>

int main() {

    boost::dynamic_bitset<> myBit (8,0b1010'0101);
    std::bitset<8> myBit2 = 0b1101'0011;
    boost::dynamic_bitset<> myBit3 (7,0b110'1001);

    std::cout << myBit2.to_ulong() << '\n';

    std::cout << myBit.test(2) << '\n';

    myBit3.append(1);
    std::cout << myBit3.to_ulong() << '\n';
    
    myBit.swap(myBit3);
    std::cout << (myBit3.to_ulong()) << '\n';    

    std::cout << myBit2 << '\n';

    return 0;
}