#include <iostream>

int add(int x){
    if(x == 0)
    return 0;
    return add(x - 1);
}

int main() {

    std::cout << add(5) << '\n';

    std::cin.get();
    return 0;
}