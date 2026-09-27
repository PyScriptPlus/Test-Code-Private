#include <iostream>
#include <type_traits>

constexpr int someFoo(int x) {
    return std::is_constant_evaluated() ? x + 1 : 0;
}

int main() {
    
    std::cout << someFoo(3) << '\n';
    return 0;
}