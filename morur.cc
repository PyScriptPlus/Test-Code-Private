#include <iostream>

void byValue(int &x);

int main() {

    // std::cout << "Loading...\n";

    int a = 10;
    byValue(a);
    std::cout << a;
    // int x, double y;
    // x = 3;
    // y = 3.6;

    return 0;
}

void byValue(int &x) {
    x = 20;
    return;
}