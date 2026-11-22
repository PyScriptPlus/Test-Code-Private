#include <iostream>
#include <cstdint>


int main() {

    // Binary Literal: C++14 or higher
    constexpr std::uint8_t binaryLiteral_bitMask0 = 0b0000'0001;
    constexpr std::uint8_t binaryLiteral_bitMask1 = 0b0000'0010;
    constexpr std::uint8_t binaryLiteral_bitMask2 = 0b0000'0100;
    constexpr std::uint8_t binaryLiteral_bitMask3 = 0b0000'1000;
    constexpr std::uint8_t binaryLiteral_bitMask4 = 0b0001'0000;
    constexpr std::uint8_t binaryLiteral_bitMask5 = 0b0010'0000;
    constexpr std::uint8_t binaryLiteral_bitMask6 = 0b0100'0000;
    constexpr std::uint8_t binaryLiteral_bitMask7 = 0b1000'0000;


    // HexaDecimal: C++11 or higher
    constexpr std::uint8_t hexaDecimal_bitMask0 = 0x01;
    constexpr std::uint8_t hexaDecimal_bitMask1 = 0x02;
    constexpr std::uint8_t hexaDecimal_bitMask2 = 0x04;
    constexpr std::uint8_t hexaDecimal_bitMask3 = 0x08;
    constexpr std::uint8_t hexaDecimal_bitMask4 = 0x10;
    constexpr std::uint8_t hexaDecimal_bitMask5 = 0x20;
    constexpr std::uint8_t hexaDecimal_bitMask6 = 0x40;
    constexpr std::uint8_t hexaDecimal_bitMask7 = 0x80;
    /*
        Method:
        For examlpe:
        0x10 Convert to decimal: 16 * 2 = 32 Decimal
        32 Decimal convert to HexaDecimal: 0x20    
    */



    // Shift: C++11 or higher
    constexpr std::uint8_t shift_bitMask0 = 1 << 0;
    constexpr std::uint8_t shift_bitMask1 = 1 << 1;
    constexpr std::uint8_t shift_bitMask2 = 1 << 2;
    constexpr std::uint8_t shift_bitMask3 = 1 << 3;
    constexpr std::uint8_t shift_bitMask4 = 1 << 4;
    constexpr std::uint8_t shift_bitMask5 = 1 << 5;
    constexpr std::uint8_t shift_bitMask6 = 1 << 6;
    constexpr std::uint8_t shift_bitMask7 = 1 << 7;


    return 0;
}