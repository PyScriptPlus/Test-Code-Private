#include <iostream>
#include <vector>
#include <cmath>

void cout() {

    std::cout << "Hello ";
    return;
}


int main() {
    // using std::cout, std::cin;
    // using namespace std;
    

    cout();
    std::cout << "World!\n";
    {
        double y = 11.49;
        int x = (int)y;
        std::cout << x << '\n';
        int o = round(y);
        std::cout << o << '\n';
    }
    

    // int y;
    // cin >> y;
    // {
    //     using namespace std;
    //     vector<int> salam;
    // }
    

    return 0;
}