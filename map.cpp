#include <iostream>
#include <map>

int main() {

    std::map<std::string, int> myArray
    {
        {"Ali",50},
        {"Mamad",18}
    };
    myArray["Ali"] = 1;
    myArray["Ali"] += 50;
    for(auto &v : myArray)
    {
        std::cout << v.second << '\n';
    }

    return 0;
}