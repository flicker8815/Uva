#include <iostream>
#include <cstdlib>
#include <string>
int main(){
	std::string str;
	bool flag = true;
	while(std::getline(std::cin, str)) {
	    for(char &c : str) {
	    	if(c != '"') {
	    		std::cout << c;
			}else {
	    		if(flag) { std::cout << "``"; flag = false; } 
	    		else { std::cout << "''"; flag = true; } 
			}
		}
		std::cout << std::endl; 
	}
	system("pause");
	return 0;
}
