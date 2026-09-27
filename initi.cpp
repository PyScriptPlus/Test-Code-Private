#include <iostream>

void foo(int x) {

    switch(x)
    {
        int y;
        int x;
        x = 7;
        y = 2;
        case 1:
            int o;
            o = 11;
            std::cout << y << x << o << '\n';
        break;
    }
    std::cout << x << '\n';
    return;
}

int main() {

    foo(1);

    return 0;
}