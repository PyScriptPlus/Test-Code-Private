#include <iostream>

int main() {

    std::cout << sizeof(long double) << '\n';
    std::cout << sizeof(std::string) << '\n';
    std::cout << sizeof(std::string_view) << '\n';

    std::cout << typeid(5.0).name() << '\n'; 
    typedef int mamad;
    mamad x = 50;
    std::cout << typeid(x).name() << '\n';

    return 0;
}