#include <iostream>
#include <cstdint>
#include <bitset>

// color: RGB
// R: u8bit 1111'1111
// G: u8bit 1111'1111
// B: u8bit 1111'1111

// redmask = FF000000
// pixe = FF00FFAA
// &      FF000000
// 1111'1111_0000'0000_0000'0000_0000'0000
// 32 - 8 = 24
// red = 1111'1111

namespace colorMask {
    constexpr std::uint32_t redMask = 0xFF000000;
    constexpr std::uint32_t greenMask = 0x00FF0000;
    constexpr std::uint32_t blueMask = 0x0000FF00;
    constexpr std::uint32_t alphaMask = 0x000000FF;
}

int main() {

    std::cout << std::hex << "Enter colorHex: ";
    std::uint32_t pixel = 0x00000000;
    std::cin >> std::hex >> pixel;

    const std::uint8_t red = static_cast<std::uint8_t>((pixel & colorMask::redMask) >> 24);
    const std::uint8_t green = static_cast<std::uint8_t>((pixel & colorMask::greenMask) >> 16);
    const std::uint8_t blue = static_cast<std::uint8_t>((pixel & colorMask::blueMask) >> 8);
    const std::uint8_t alpha = static_cast<std::uint8_t>(pixel & colorMask::alphaMask);

    std::cout << "Red: " << static_cast<int>(red) << '\n';
    std::cout << "Green: " << static_cast<int>(green) << '\n';
    std::cout << "Blue: " << static_cast<int>(blue) << '\n';
    std::cout << "Alpha: " << static_cast<int>(alpha) << '\n';

    std::cout << "\n\n============================\n\n";
    std::cout << std::dec;
    std::cout << "Red: " << static_cast<int>(red) << '\n';
    std::cout << "Green: " << static_cast<int>(green) << '\n';
    std::cout << "Blue: " << static_cast<int>(blue) << '\n';
    std::cout << "Alpha: " << static_cast<int>(alpha) << '\n';


    return 0;
}