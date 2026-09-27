#include <iostream>

int doSomething() {
    static int s_sstic {3};
    return s_sstic++;
}

int main() {

    std::cout << doSomething();
    std::cout << doSomething();
    std::cout << doSomething();
    std::cout << doSomething() << '\n';
    std::cout << sizeof(long long) << '\n';

    return 0;
}