#include <iostream>

int main() {
/*
	char s = 97;
	char d = char(97);
	char w = static_cast<char>(97);
	std::cout << s << '\t' << d << '\t' << w << '\t';
*/
	char alfba = '\0';
	for(int i = 97; i <= 122; i++)
	{
		alfba = char(i);
		std::cout << alfba << '\t';
		if(i % 6 == 0)
			std::cout << '\n';
	}


	return 0;
}
