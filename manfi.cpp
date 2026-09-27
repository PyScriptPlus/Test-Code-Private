#include <iostream>
#include <cstdint>

int main() {

    std::uint8_t five = 0b0000'0101;
    std::int8_t tabdil = static_cast<int8_t>(~(five));
    std::int8_t jam = tabdil + 0b0000'0001;
    std::cout << (int)jam << '\n';

    return 0;
}