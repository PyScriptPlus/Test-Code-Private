#include <iostream>


double harmonicSeries(double i) {

    double x;
    std::cin >> x;
    double res;
    label:
    if(i <= x)
    {
    res += (1 / i);
    }
    std::cout << res << '\n';
    if(i == x)
    {
        return 0;
    }
    return harmonicSeries(i + 1);
}

int factorial(int x) {
    
    
    if (x == 0)
    {
        return 1;
    }
    int res = factorial(x - 1) * x;
    std::cout << res << '\n';
    return res;
}




int main() {

    // x ro input kon
    // az 1 ta on x taghsim kon
    // jam' har kodum ro ba javab ghabli jam' kon
    // namayesh bede

    // double x;
    // std::cin >> x;
    // double i = 1;
    // double res = 0;
    // while (i <= x)
    // {
    //     res += (1 / i);
    //     std::cout << res << '\n';
    //     i++;
    // }

    // harmonicSeries(1);



    // x ro input kon
    // i ke 1 hast be khodesh zarb mishe
    // javabesh ba adad ba'adish ke i++ shod zarb mishe
    // Hamin kar edame peyda mikone ta x berese

    // int x;
    // std::cin >> x;
    // int i = 1;
    // int res = 1;
    // while(i <= x)
    // {
    //     res *= i;
    //     std::cout << res << '\n';
    //     i++;
    // }

    factorial(5);

    
    return 0;
}