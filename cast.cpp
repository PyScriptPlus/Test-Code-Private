#include <iostream>
#include <climits>
#include <cstdint>

int main() {
    
    // #pragma region cast
    // int x = -5;
    // unsigned int y = static_cast<unsigned int>(x);
    // std::cout << y << '\n';
    // #pragma endregion
    
    // std::cout << UINT_MAX << '\n';
    // std::uint32_t number = 4294967295;
    // std::cout << number << '\n';

    int oct = 020;
    // 20
    // 10
    // 2 * 8 ^ 1 = 16
    std::cout << oct << '\n';

    return 0;
}