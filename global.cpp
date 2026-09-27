#include <iostream>

const int g_x{};
constexpr int g_r{};

void doSomething() {
    // g_x = 3;
    std::cout << g_x << '\n';
    std::cout << g_r << '\n';
    return;
}

int main() {

    doSomething();
    std::cout << g_x << '\n';

    // g_x = 5;
    std::cout << g_x << '\n';

    return 0;
}