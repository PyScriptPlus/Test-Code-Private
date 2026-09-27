#include <iostream>
#include <thread>
#include <chrono>

int main() {
    
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 10; j += i)
        {
            std::cout << i << j << '\n';
        }
        
    }
    

    return 0;
}
