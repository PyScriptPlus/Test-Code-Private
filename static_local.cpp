#include <iostream>

int main() {

    int i = 1;
    while(i <= 5)
    {
        static int x = 0;
        if (x == 2)
        {
            std::cout << "X is 2\n";
            break;
        }
        x++;
        i++;
        if (true)
        {
            continue;
        }
        std::cout << "Hello\n";
    }

    return 0;
}