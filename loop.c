#include <stdio.h>

int main() {


    // int y;
    // scanf("%d",&y);
    // for(int x = 1 ; x <= y ; x++)
    // {
    //     printf("%d: %d\n", x, y);
    // }

    for(int i = 1 ; i <= 10 ; i++)
    {
        for(int c = 1 ; c <= 10 ; c++)
        {
            int res = i * c; 
            printf("%d\t", res);
        }
        printf("\n");
    }

    return 0;
}