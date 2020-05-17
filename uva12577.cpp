#include <iostream>
#include <cstdlib>
#include <string>
int main(int argc, char const *argv[])
{
 	std::string str;
 	int i = 0;
 	while(std::getline(std::cin, str) && str != "*") {
 		i++;
 		if(!str.compare("Hajj")) { std::cout << "Case "<< i << ": " <<"Hajj-e-Akbar" << std::endl; }
 		else{ std::cout << "Case "<< i << ": " <<"Hajj-e-Asghar" << std::endl; }
 	}
	return 0;
}