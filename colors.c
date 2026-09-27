#include <stdio.h>

struct Colors
{
    char* red;
    char* green;
    char* blue;
};

int main() {

    struct Colors rgb;
    rgb.red = "\e[31m Red \e[0m";
    printf("%s\n",rgb.red);
    rgb.green = "\e[32m Green \e[0m";
    printf("%s\n",rgb.green);
    rgb.blue = "\e[36m Blue \e[0m";
    printf("%s\n",rgb.blue);

    return 0;
}