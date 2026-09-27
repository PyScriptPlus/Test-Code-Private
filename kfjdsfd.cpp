#include <iostream>

inline double salam(double x, double y) {
    while(x > y)
    {
        std::cout << "Hello while()\n";
        y++;
    }
    return x + y;
}


int main() {

    double p = salam(50.0, 1.0);
    std::cout << p << '\n';


    return 0;
}