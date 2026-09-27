#include <iostream>
#include <cstdint>

int main() {

    // std::cout << sizeof(char) << '\n';
    // std::cout << sizeof(char8_t) << '\n';
    // std::cout << sizeof(char16_t) << '\n';
    // std::cout << sizeof(char32_t) << '\n';

    // char a = 97;
    // char A = 65;
    // std::cout << a << '\n' <<  A << '\n';
    // char k = '\u0061';
    // char l = '\u0041';
    // std::cout << l << '\n' <<  k << '\n';
    // int d3; 
    // std::uint8_t zz = 6;
    // zz = zz + 1;
    // std::cout << static_cast<int>(zz);

    // int x = 5;
    // std::cout << x++ << '\n';
    // std::cout << x << '\n';
    // std::cout << x << '\n';
    // std::cout << x << '\n';
    // std::cout << x << '\n';

    if (1)
    {
        /* code */
    }
    bool x = true;
    x = !!x;
    std::cout << x << '\n';

    int a = 6, b = 7;
    switch (a > b)
    {
        
        case 10 > 20:
            std::cout << "h";
            break;
        default:
            break;
    }

    
    return 0;
}