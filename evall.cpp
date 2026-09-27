#include <iostream>
#include <type_traits>

consteval int doSome() {
    return 5;
}

consteval int foo(int x) {
    if(std::is_constant_evaluated())
        return x;
    else 
        return 0;
}

int main() {
    
    std::cout << foo(doSome()) << '\n';

    char x = '\0';
    std::cout << typeid(x).name() << '\n';


    return 0;
}

