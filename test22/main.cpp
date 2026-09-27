#include <iostream>

static int g_x = 4;
int num();

int main() {

    std::cout << num() << '\n';
    std::cout << g_x << '\n';

    return 0;
}