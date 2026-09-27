#include <iostream> 
#include <iomanip>

float foo(float x) {
    return x;
}

int main() {

    float x = 12.653f;
    float y = 147.693f;


    float z = 11.245f;
    // std::cout << std::setprecision(15);
    std::cout << static_cast<int>(z) << '\n';


    return 0;
}