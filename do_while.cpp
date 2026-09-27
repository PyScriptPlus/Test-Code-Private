#include <iostream>

int main() {

    bool enable = false;
    int x = 0;
    do
    {
        ++x;
        std::cout << x << '\n';
        if(x == 1)
        {
            enable = true;
        }
        if(x == 1999) enable = false;
    } while(enable);

    return 0;
}