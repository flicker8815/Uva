#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <algorithm>
int main() {
	int t = 0;
	(std::cin >> t).clear();
    std::cin.ignore();
	int i = 0;
	while(i++ < t) {
		int n = 0;
		(std::cin >> n).clear();
    	std::cin.ignore();
		n = ((n * 63 + 7492) * 5) - 498; 
		std::stringstream ss;
		std::string s;
		ss << n;
		ss >> s;
		ss.str("");
		ss.clear();
		std::reverse(s.begin(), s.end());
		std::cout << s.at(1) << std::endl; 
	} 
	system("pause");
	return 0;
} 
