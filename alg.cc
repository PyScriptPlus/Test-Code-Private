#include <iostream>

int main() {

    int inp[3];
    int month;
    for(int i = 0; i <= 2; ++i)
    {
        std::cin >> inp[i];
    }
    std::cin >> month;

    int x{};

    int C[3] = {2,2,1};
    int B[3] = {4,5,2};
    int A[3] = {8,10,4};

    int Z[3];

    int p{};

    for(int i = 0; i <= 2; i++)
    {
        if(C[i] >= inp[i])
        {
            ++x;
            if(x == 3)
            {
                p = 300 * month;
                if(month >= 12)
                {
                    p -= ((p * 10) / 100);
                }
                std::cout << "C" << " " << p << '\n';    
                return 0;
            }
        }
    }
    x = 0;
    for(int i = 0; i <= 2; i++)
    {
        if(B[i] >= inp[i] && inp[i] > C[i])
        {
            ++x;
            if(x == 3)
            {
                p = 600 * month;
                if(month >= 12)
                {
                    p -= ((p * 10) / 100);
                }
                std::cout << "B" << " " << p << '\n';    
                return 0;
            }
        }
    }
    x = 0;
    for(int i = 0; i <= 2; i++)
    {
        if(A[i] >= inp[i] && inp[i] > B[i])
        {
            ++x;
            if(x == 3)
            {
                p = 1200 * month;
                if(month >= 12)
                {
                    p -= ((p * 10) / 100);
                }
                std::cout << "A" << " " << p << '\n';    
                return 0;
            }
        }
    }
    for(int i = 0; i <= 2; i++)
    {
        p += (50 * inp[i]);
    }
    p *= month;
    if(month >= 12)
    {
        p -= ((p * 10) / 100);
    }

    std::cout << "Z" << " " << p << '\n';

    return 0;
}