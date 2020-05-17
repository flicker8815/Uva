#include <iostream>
#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	std::string str;
	std::vector<std::string> c {"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};
	std::vector<std::string> l {"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"};
	int count = 0;
	while(std::getline(std::cin, str) && (str.compare("#"))) {
		count++;
		std::vector<std::string>::iterator iter;
		iter = std::find(l.begin(), l.end(), str);
		if(iter == l.end()) {
			std::cout << "Case " << count << ": "<< "UNKNOWN" << std::endl; 
		}else {
			int sPosition = std::distance(l.begin(), iter);
			std::cout << "Case " << count << ": "<< c.at(sPosition) << std::endl; 
		}
	}
	system("pause");
	return 0;
}
