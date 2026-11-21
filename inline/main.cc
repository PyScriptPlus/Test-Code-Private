#include <iostream>

// template <typename T>
// T maxe(T x, T y);

// template <>
// double maxe<double>(double x, double y) {
//  return (x > y) ?  x : y;
// }

template <typename T, typename U>
T maxe(T x, U y) {
    return (x > y) ?  x : y;
}

int main() {

    std::cout << maxe(9.5,4) << '\n';
     

    return 0;
}