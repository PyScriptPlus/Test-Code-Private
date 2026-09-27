#include <iostream>
#include <thread>

void printFName();
void printLName();


int main() {
    
    std::thread fname(printFName);
    std::thread lname(printLName);

    fname.join();
    lname.join();

    return 0;
}


void printFName() {
    for(int i{0}; i <= 10; ++i)
    {
        std::cout << "Mohammad\n";
    }
    return;
}

void printLName() {
    for(int i{0}; i <= 10; ++i)
    {
        std::cout << "Yousefi\n";
    }
    return;
}