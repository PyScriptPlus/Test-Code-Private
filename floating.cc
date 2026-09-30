#include <iostream>
#include <iomanip>

int main() {

//	std::cout << sizeof(long double) << '\n';
//	std::cout << typeid(5.3f).name() << '\n';


	double a = 1.0;
	std::cout << a << '\n';
	double i = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1
			+ 0.1 + 0.1 + 1e-16;
	std::cout << i << '\n';
	std::cout << std::setprecision(20) << i << '\n';
	if(a == i) 
		std::cout << "Bale\n";
	else
		std::cout << "Kheyr\n";

	return 0;
}
