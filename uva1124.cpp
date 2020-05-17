#include <iostream>
#include <cstdlib>
#include <string>
int main(){
	std::string str;
	while(std::getline(std::cin, str)) {
		std::cout << str << std::endl; 
	}
	system("pause");
	return 0;
}
