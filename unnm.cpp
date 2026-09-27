#include <iostream>

inline namespace v1 {
    void doSomething() {
        std::cout << "v1" << '\n';
        return;
    }
}

inline namespace v2 {
    void doSomethingg() {
        std::cout << "v2" << '\n';
        return;
    }
}

int main() {
    int x = 3;
    if (x = 0)
    {
        std::cout << "3\n";
    }
    else
    {

    }
    doSomething();
    doSomethingg();

    return 0;
}