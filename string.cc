#include <iostream>
#include <string>

int main() {

	std::cout << typeid("Mohammad").name() << '\n'; // (Array) (9 Element) (Character) A9_c
	using namespace std::literals;
	std::cout << typeid("Mohammad"s).name() << '\n';
	std::string num5 = "5";
	int x = std::stoi(num5);
	int y = x + 5;
	std::cout << y << '\n';

	std::string names = "Mamad";
	int z = names.length();
	std::cout << z << '\n';

	std::string firstAndLast;
	std::getline(std::cin >> std::ws, firstAndLast);
	std::cout << firstAndLast << '\n';
	
	return 0;
}
