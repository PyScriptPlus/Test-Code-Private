#include <stdio.h>

int main() {

    long long num;
    scanf("%lld", &num);
    while(num != 1)
    {
        if(num % 2 == 0) 
    {
        num = num / 2;
    }
    else
    {
        num = 3 * num + 1;
    }

        printf("%lld\n", num);
    }
    

    return 0;
}