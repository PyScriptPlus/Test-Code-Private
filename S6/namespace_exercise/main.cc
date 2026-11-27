#include <iostream>

namespace test {
    void integral(); // Declare
}

void doSome(void) {

    std::cout << "Global\n";
    return;
}

namespace goo {
    void doSome(void) {
        std::cout << "Namespace goo\n";
        return;
    }
    namespace foo {
        void doing(void) {
            ::doSome();
            doSome();
        }
    }
}

int main() {

    // using salam = int;
    // typedef int byebye;

    // salam slm = 50;
    // std::cout << typeid(slm).name() << '\n';

    goo::foo::doing();
    namespace str = goo::foo;

    test::integral();
    str::doing();


    return 0;
}