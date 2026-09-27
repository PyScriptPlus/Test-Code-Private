#include <iostream>

int g_x;
int doSomefunc() {
    g_x = 4;
    return (5000 * 0);
}

void doSomething() {
    g_x = 3;
    std::cout << doSomefunc() << '\n';
    if (g_x != 4)
    {
        std::cout << "Start!\n";
    }
    else
    {
        std::cout << "Stop!\n";
    }
    
    return;
}

int main() {

    int x = 2;
    g_x = 0;
    do
    {
        doSomething();    
        x++;
    } while (x <= 2);
    
    

    return 0;
}