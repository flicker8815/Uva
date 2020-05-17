#include <iostream>
#include <cstdlib>
#include <string>
int main() {
	int n = 0;
	int i = 0;
	std::cin >> n;
	std::getchar();
	std::string str;
	while(i++ < n) {
		std::getline(std::cin, str);
		if(str.length() == 3) {
			int count = 0;
			if(str.at(0) == 'o') { count++;	}
			if(str.at(1) == 'n') { count++;	}
			if(str.at(2) == 'e') { count++;	}
			if(count >= 2) {
				std::cout << "1" << std::endl;
			}else {
				std::cout << "2" << std::endl;
			}
			
		}else if(str.length() == 5) {
			std::cout << "3" << std::endl;
		} 
	}
	system("pause");
	return 0;
}
