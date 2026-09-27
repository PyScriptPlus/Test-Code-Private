#include <iostream>

int main() {

    // int* p = (int*) malloc(sizeof(int));
    // *p = 10;
    // std::cout << *p << '\n';
    // free(p);
    // std::cout << sizeof(p) << '\n';
    // std::cout << sizeof(int) << '\n';
    int s = 0;
    int i = 0;
    int m = 1;

    ddd:
    if(i == 20)
    {
        std::cout << s << '\n';
        return 0;
    }
    s = m + s;
    i++;
    m += 4;
    goto ddd;
    
    return 0;
}