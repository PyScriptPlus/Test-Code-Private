#include <iostream>
#include <iomanip>

int main() {

	double i = 4.173e-23;
	std::cout << std::fixed << std::setprecision(26) 
	<< i << "\n";
	std::cout << i << "\n";  
	std::cout << std::scientific << i << "\n";
	std::cout << std::fixed << i << "\n";

	double x = 4.5236e25;
	std::cout << std::fixed << std::setprecision(0)
	<< x << '\n';

	return 0;
}
