#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
	std::string str;
	while(std::getline(std::cin, str)) {
		int sum = 0;
		std::string::reverse_iterator iter;
		for(iter = str.rbegin(); iter != str.rend(); ++iter) {
			if(*iter >= 'p' && *iter <= 'z') sum++;
			else if(*iter == 'N') {}
			else sum--;
			if(sum <= 0) break;
		}
		if(sum == 1) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}