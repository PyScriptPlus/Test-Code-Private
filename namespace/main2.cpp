#include <iostream>

// Ravesh ghadimi
namespace cars{
    namespace benz{
        void print(){
            std::cout << "Is Benz\n";
            return;
        }
    }
}
// Ravesh C++17:
namespace animals::bear{
    void bears(){
        std::cout << "Bear" << '\n';
        return;
    }
}
// Mikham toye animal ham chizi gharar dade she
namespace animals{
    void animal(){
        std::cout << "Select Animal" << '\n';
    }
}

int main() {

    cars::benz::print();
    namespace BenzCar = cars::benz;
    BenzCar::print();

    animals::bear::bears();
    animals::animal();

    return 0;
}