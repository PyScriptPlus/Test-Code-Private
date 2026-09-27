#include <iostream>
#include <limits>
#include <iomanip>

int main() {

    std::wint_t x = std::numeric_limits<std::wint_t>::max();
    std::cout << static_cast<int>(x) << '\n';

    int y = std::numeric_limits<int>::epsilon();
    std::cout << std::setprecision(17);
    std::cout << y << '\n';

    return 0;
}