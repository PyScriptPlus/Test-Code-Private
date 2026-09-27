#include <iostream>
#include <assert.h>
#include <string>

int main() {

    // std::cout << '\0' << '\n';
    // std::string k = "";
    // assert(k == "d");

    int x = 50;
    int* p = &x;
    int** j = &p;
    std::cout << j << '\n';

    return 0;
}
