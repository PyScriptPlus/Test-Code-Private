#include <iostream>
#include <Windows.h>
#include <bitset>

int main() {

    DWORD hard;
    hard = GetLogicalDrives();
    std::cout << hard << '\n';

    std::bitset<8> mydrive = 68;
    std::cout << mydrive << '\n';
    // 01000100

    return 0;
}