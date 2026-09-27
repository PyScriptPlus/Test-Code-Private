#include <iostream>

int main() {

    long long int n = 0;
    long long int m = 0;
    long long int flag = 0;
    long long int chai = 0;
    std::cin >> n >> m;
    if(n >= m)
    {
        n -= m;
        m *= 2;
        chai += (m + n);
    }
    else 
    {
        return 0;
    }
    if(chai > 0)
    {
        flag = (chai + 8) / 9;
    }
    std::cout << flag << '\n';
    


    return 0;
}