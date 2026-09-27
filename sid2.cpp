#include <iostream>
#include <chrono>
#include <random>

unsigned int LCG() {
    static unsigned int s_state = 
    static_cast<unsigned int>(std::chrono::steady_clock::now().time_since_epoch().count());
    s_state = 8253729 * s_state + 2396403;
    return s_state % 32768;
}
unsigned int LCG16(unsigned int min, unsigned int max) {
    return (LCG() % (max - min + 1) + min);
}
int LCG15(int min, int max) {
    return (LCG() % (max - min + 1) + min);
}

int main() {
    
    // int min, max;
    // std::cout << "Enter a min value: ";
    // std::cin >> min;
    // std::cout << "Enter a max value: ";
    // std::cin >> max;

    for (int i = 1; i <= 100; i++)
    {
        std::cout << LCG16(5,10) << '\t';
        if(i % 10 == 0)
            std::cout << '\n';
    }
    
    return 0;
}