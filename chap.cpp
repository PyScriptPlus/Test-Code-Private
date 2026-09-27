#include <iostream>
#include <string_view>

void printHello(std::string_view message) {
    std::cout << message << std::endl;
}

int main() {
    printHello("Hello World!");
    return 0;
}
