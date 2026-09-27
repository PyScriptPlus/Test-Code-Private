#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    srand(time(NULL));
    int w;
    for(int i = 1; i <= 100; ++i)
    {
        w = rand() % 10  + 2;
        printf("%d\t", w);
        if(i % 10 == 0)
            printf("\n");
    }
    // for (int i = 1; i <= 100; i++)
    // {
    //     printf("%d\t", w);
    //     if(w % 10 == 0)
    //         printf("\n");
    // }
    gets();
    return 0;
}