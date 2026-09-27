#include <stdio.h>

int main() {

    int a = -20;
    int b = -4;
    int c = 4;
    zaribFour:printf("%d\n", a);
    a = c + a;
    if (b >= a)
    {
        goto zaribFour;
    }
    

    return 0;
}