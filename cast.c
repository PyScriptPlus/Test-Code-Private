#include <stdio.h>
#include <stdint.h>

int main() {

    int8_t x = 97;
    printf("%d\n",x);
    printf("%c\n",x);

    int8_t y = 129;
    printf("%d\n", y);
    uint8_t z = (uint8_t)y;
    printf("%d\n", z);

    typedef int Mamad;
    Mamad xy = 50000;
    printf("Number is: %d\n", xy);

    printf("%d\n", sizeof(long));

    typedef unsigned long uint4Byte_t;
    // uint4Byte_t number = 4294967295;
    uint32_t number = 4294967295;
    printf("%d", number);

}