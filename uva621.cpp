#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
int main(int argc, char const *argv[])
{
	int n = 0;
	std::cin >> n;
	std::getchar();
	int i = 0;
	std::string str;
	while(std::getline(std::cin, str) && (i++ < n)) {
		if(!str.compare("1") || !str.compare("4") || !str.compare("78")) {
			std::cout << "+" << std::endl;
		}else if(!str.compare("135") || !str.compare("435") || !str.compare("7835")) {
			std::cout << "-" << std::endl;
		}else if(!str.compare("914") || !str.compare("944") || !str.compare("9784")) {
			std::cout << "*" << std::endl;
		}else if(!str.compare("1901") || !str.compare("1904") || !str.compare("19078") {
			std::cout << "?" << std::endl;
		}
	}
	return 0;
}