#include <iostream>
#include <list>
int main(int argc, char const *argv[])
{
	std::string str;
	while(std::getline(std::cin, str)) {
		std::list<char> l;
		std::list<char>::iterator iter = l.begin();
		for(int i = 0; i < str.length(); i++) {
			if(str[i] == '[') {
				iter = l.begin();
				continue;
			}
			else if(str[i] == ']') {
				iter = l.end();
				continue;
			}else {
				l.insert(iter, str[i]);
			}
		}
		for(auto c : l) std::cout << c;
		std::cout << "\n";
	}
	return 0;
}