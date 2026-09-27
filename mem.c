#include <stdio.h>

int main() {
/*
    int num = 50;

    int* ptr = &num;
    int** dptr = &ptr;
    printf("%p\n", (void*)&num);
    printf("%p\n", (void*)ptr);
    printf("%p\n", (void*)dptr);
    printf("%p\n", (void*)&ptr);
    printf("%d\n", *ptr);
    printf("%p\n", (void*)*dptr);
    printf("%d\n", **dptr);
*/
    //-------------------------------------------------//

    int arr[5] = {15,66,25,36,77};

    int* ptr = &arr[0];
    printf("%d\n", *ptr); // 15
    ++ptr;
    printf("%d\n", *ptr++); // 66
    printf("%d\n", *++ptr); // 36

    return 0;
}