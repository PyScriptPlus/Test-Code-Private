#include <iostream>
#include <string>

struct Colors
{
    std::string red;
    std::string green;
    std::string blue;
};

int main() {

    Colors rgb;

    rgb.red = "\e[31m Red \e[0m";
    std::cout << rgb.red << '\n';
    rgb.green = "\e[32m Green \e[0m";
    std::cout << rgb.green << '\n';
    rgb.blue = "\e[36m Blue \e[0m";
    std::cout << rgb.blue << '\n';

    return 0;
}