#include <iostream>
#include <cstdlib>
#include <string>
int main() {
	int t = 0;
	std::cin >> t;
	std::getchar();
	int i = 0;
	int total = 0;
	while(i++ < t) {
		std::string str;
		std::getline(std::cin, str);
		if(str.find("donate") != std::string::npos) {
			std::string m_str(str.begin() + 7, str.end());
			int m = std::stoi(m_str);
			total += m;
		}else {
			std::cout << total << std::endl; 
		}
	}
	system("pause");
	return 0;
}
