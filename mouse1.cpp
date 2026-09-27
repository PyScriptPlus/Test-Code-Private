#include <iostream>

namespace {
    int hello() {
        return 3;
    }
}

void print(){
    std::cout << hello() << '\n';
    return;
}