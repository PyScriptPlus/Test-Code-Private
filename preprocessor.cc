#include "Guard.hpp"
#include "Guard2.hpp"

// constexpr int num(int x) {
//     return x * x;
// }

int main() {

    // #define SQUARE(x) ((x) * (x))
    // int x = 5;
    // std::cout << SQUARE(x++); // ((x++) * (x++)) 30
    // int y = 5;
    // std::cout << '\n' << num(y++); // 25

    getNum(num(5));

    return 0;
}

#if 0

#ifdef CPU
    #define Catch
#endif

#ifndef Catch
    #define Register
#endif

#undef Register

#ifdef Register
    #define ROM
#endif

#if true
    #define GPU
#endif

#endif