#include <iostream>
#include <stdexcept>

int main() {

    int x = 0;
    int y = 5;
    mojaz:
    try
    {
        if (x == 0)
        {
            throw std::runtime_error("0 mojaz nis!!");
        }

        std::cout << "15 / 5 = " << x / y << '\n';
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
        if (x == 0)
        {
            x = 15;
            goto mojaz;
        }
    }
    
    std::cout << "Hello World!\n";

    return 0;
}