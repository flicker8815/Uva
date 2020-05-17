#include <iostream>
#include <string>
#include <stack>
int main(int argc, char const *argv[])
{
	int n;
	std:: cin >> n;
	std::getchar();
	while(n--) {
		bool flag = true;
		std::stack<char> s;
		std::string str;
		std::getline(std::cin, str);
		for(char c : str) {
			if(c == '(' || c == '[') s.emplace(c);
			else {
				if(s.empty()) {
					flag = false;
					break;
				}else if(c == ')') {
					if(s.top() == '(') {
						s.pop();
					}else {
						flag = false;
						break;
					}
				}else if(c == ']') {
					if(s.top() == '[') {
						s.pop();
					}else {
						flag = false;
						break;
					}
				}
			}
		}
		if(!s.empty()) flag = false;
		if(flag) std::cout << "Yes\n";
		else  std::cout << "No\n";
	}
	return 0;
}