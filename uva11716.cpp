#include <iostream>
#include <vector>
#include <string>
#include <cmath>
int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	std::getchar();
	while(n--) {
		std::string str;
		std::getline(std::cin, str);
		double len = std::sqrt(str.length());
		if(len != (int)len) {
			std::cout << "INVALID\n";
		}else {
			for(int i = 0; i < len; i++) 
				for(int j = 0; j < len; j++) 
					std::cout << str[i + (len * j)];
			std::cout << "\n";
		}
		
	}
	return 0;
}