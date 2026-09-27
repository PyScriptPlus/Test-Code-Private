#include <iostream>
// using namespace std;

int main() {

    int result{};
    int a, b;

    std::cout << "Number 1: ";
    std::cin >> a;

    std::cout << "Number 2: ";
    std::cin >> b;
    try 
    {
        (a == 0 || b == 0) ? throw std::runtime_error("0 Nemipaziram") : result = a / b;

        std::cout << "Result: " << a << " / " << b << " = " << result << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "Hello" << '\n';
    
    return 0;
}