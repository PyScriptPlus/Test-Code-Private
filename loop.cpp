#include <iostream>

int main() {

    int number = 2;
    int res = 0;
    while(number <= 50)
    {
        // Console.WriteLine(number);
        std::cout << number << '\n';
        res += number;
        number += 2;
    }
    std::cout << '\n' << "Res: " << res << '\n';
    // Console.WriteLine("\nres: \n");
    // Console.WriteLine(res);
    


    return 0;
}