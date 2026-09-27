#include <iostream>
#include "MyException.hpp"

int main() {

    try
    {
        if(0 == 0) throw Myexception("Alooo\n");
    }
    catch(const Myexception& msg)
    {
        std::cerr << msg.what();
    }
    

    return 0;
}