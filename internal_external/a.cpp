#include <iostream>

extern const int x = 18;

static void foo(int x) {
    std::cout << "Your Number is: " << x << '\n';
    return;
}

void number(int x){
    foo(x);
}