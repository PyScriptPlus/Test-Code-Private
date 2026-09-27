#include <stdio.h>
#include <stdint.h>
#include <threads.h>

int myThread(void* args) {
    printf("Hello from C11 thread!\n");
    return 0;
}

int main() {
    thrd_t thread;

    thrd_create(&thread, myThread, NULL);
    thrd_create(&thread, myThread, NULL);


    int num = 0;
    int *ptrNum = &num;
    *ptrNum = 3;
    printf("%d\n", *ptrNum);


    thrd_join(thread,NULL);
    return 0;
}