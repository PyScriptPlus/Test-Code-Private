#include <iostream>

int generateID() {

    static int s_itemID = 0;
    return s_itemID++;
}
int main() {

    std::cout << generateID() << '\n';

    return 0;
}