#include <iostream>
#include <type_traits>

constexpr int max_dd(int x, int y) {
    if(std::is_constant_evaluated())
    {
        return ((x > y) ? x : y);
    }
    else 
    {
        return 0;
    }
}

// static void printMax(int x, int y);

int main() {

    constexpr int x = 5;
    constexpr int y = 6;
    constexpr int g = max_dd(x, y);
    std::cout << g << '\n';
    std::cout << max_dd(x, y);
    return 0;
}

// void printMax(int x, int y) {
//     std::cout << "Your Max numbers: " << max(x, y) << '\n';
// }


