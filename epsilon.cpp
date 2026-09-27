#include <cmath>
#include <iostream>
#include <climits>
#include <iomanip>

int main() {

    // Tozih ke numeric_limits daghighan chiye?
    double epsilon = std::numeric_limits<double>::epsilon();
    std::cout << std::setprecision(187) << 
    (epsilon + 1.0) << '\n';



    double a = 100.00 - 99.99;
    double b = 10.00 - 9.99;
    if (std::abs(a - b) < epsilon) {
        std::cout << "Kami barabar has" << std::endl;
    } else {
        std::cout << "aslan nist" << std::endl;
    }

    return 0;
}