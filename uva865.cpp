#include "/Users/lochieh/Desktop/Uva/bits/stdc++.h"
//#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
	int n = 0;
	
	std::cin >> n;
	std::getchar();
	std::cin.get();
	while(n--) {
		std::string plain_str;
		std::string substitu_str;
		std::string text;
		std::getline(std::cin, plain_str);
		std::getline(std::cin, substitu_str);
		std::cout << substitu_str << std::endl;
		std::cout << plain_str << std::endl;
		
		while(std::getline(std::cin, text) && text!= "") {
            for(char &c : text) {
				for(int i = 0; i < plain_str.length(); ++i) {
					if(c == plain_str.at(i)) {
						c = substitu_str.at(i);
						break;
					}
				}
			}
			std::cout << text << std::endl;
		}
		if(n)
			std::endl(std::cout);
	}
	return 0;
}