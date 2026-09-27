#include <iostream>

int main() {

    int n = 0;
    std::cin >> n;
    int takhfif[n];
    int counter = 0;
    for(int i = 0; i < n; ++i)
    {
        std::cin >> takhfif[i];
    }
    for(int i = 0; i < n; ++i)
    {
        if(takhfif[i] == 0)
            ++counter;
    }
    std::cout << counter << '\n';
    return 0;
}