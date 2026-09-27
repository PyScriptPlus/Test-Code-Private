#include <iostream>
#include <cstdlib>
#include <string>

void cleanUp() {
    std::cout << "cleanUp\n";
    return;
}

int main() {

    // std::string l = run_command()

    int x = 3;
    int y = 4;
    x ^= y ^= x ^= y;
    // x: 0000'0011
    // y: 0000'0100
    //x = 0000'0111
    // y: 0000'0100
    //y = 0000'0011
    // x: 0000'0111
    //x = 0000'0100
    std::cout << x << '\t' << y << '\n';
    // std::atexit(cleanUp);

    // std::cout << 10 << '\n';
    // std::exit(0);
    // std::cout << 2 << '\n';

    return 0;
}