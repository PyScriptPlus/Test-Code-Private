#include <iostream>


int min(int x, int y){
    return (x < y) ? x : y;
}


int main() {

    std::cout << min(3, 5) << '\n';

    return 0;
}