#include <iostream>

int main() {

    std::cout << "For: \n\n\n";
    for(int i = 1 ; i <= 10 ; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            std::cout << i * j << '\t';
        }
        std::cout << '\n';
    }

    std::cout << "\n\n\n\n\n" << "While: \n\n\n";
    int i = 1;
    while(i <= 10)
    {
        int j = 1;
        while(j <= 10)
        {
            std::cout << i * j << '\t';
            j++;
        }
        std::cout << '\n';
        i++;
    }
    


    // int pass;
    // do
    // {
    //     std::cout << "Enter your password: ";
    //     std::cin >> pass;
    //     if(pass == 51);

    //     else
    //         std::cout << "Dobare talash kon\n";
    // }
    // while(pass != 51);
    //     std::cout << "Pass is correct\n";

    return 0;
}