#include <iostream>
#include <cstdint>

int main() {

/*	std::cout << sizeof(char) << '\n';
	std::cout << sizeof(long long int) << '\n';
	std::cout << sizeof(long) << '\n';
	std::cout << sizeof(long double) << '\n';
	const char8_t* name = u8"سلام";
	std::cout << reinterpret_cast<const char*>(name) << '\n';
*/
	// Fast:
	std::cout << sizeof(std::int_fast8_t) << '\n';
	std::cout << sizeof(std::int_fast16_t) << '\n';
	std::cout << sizeof(std::int_fast32_t) << '\n';
	std::cout << sizeof(std::int_fast64_t) << '\n';

	// Least:
	std::cout << sizeof(std::int_least8_t) << '\n';
	std::cout << sizeof(std::int_least16_t) << '\n';
	std::cout << sizeof(std::int_least32_t) << '\n';
	std::cout << sizeof(std::int_least64_t) << '\n';

	return 0;
}
