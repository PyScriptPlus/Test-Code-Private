#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

struct Hack
{
    int random;
};

int main() {

    srand(time(NULL));

    struct Hack p;
    struct Hack* p2 = &p;

    p2->random = rand() % 100 + 1;

    int num = 0;
    while (num != p.random)
    {
        static int16_t chance = 5;
        printf("Your chance: %d\n",chance);
        printf("Enter number: ");
        if(scanf("%d", &num) != 1){ printf("Invalid number"); return 0;};
        --chance;
        if(chance)
        {
            if (num > p.random)
            {
                printf("Number high\n");
            }
            else if(num < p.random)
            {
                printf("Number low\n");
            }
        }
        if(!chance)
        {
            break;
        }
    }
    if(num == p2->random)
    {
        printf("You hacked success: %d", p2->random);
    }
    else
    {
        printf("Your lose the hacked :( \n")  ;  
    }

    return 0;
}