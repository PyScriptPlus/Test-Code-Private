#include <iostream>

int main() {

    int x[2][5] = 
    {
        {1,2,99,2,69},
        {2,2,2,2,2}
    };

    for(auto& y : x)
    {
        for(int z : y)
        {
        std::cout << z << '\n';
        }
    }

    return 0;
}