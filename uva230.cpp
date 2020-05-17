#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
int main(int argc, char const *argv[])
{
	std::string str("");
	std::map<std::string, std::string> m;
	while(std::getline(std::cin, str)) {
		if(str == "END") break;
		int find = str.find("by");
		std::string s1(str, 0, find - 1), s2(str, find + 3, str.length() - find - 1);
		m[s2] = s1;
	}
	str = "";
    std::stack<std::string> sk;
    std::map<std::string, std::string> m2;
	while(std::getline(std::cin, str)) {
		if(str == "END") break;
		else {
			std::string s1(str, 7, str.length() - 7);
			if(str.find("BORROW") != std::string::npos) {
				std::map<std::string, std::string>::iterator iter = std::find_if(m.begin(), m.end(), [s1](const std::pair<std::string, std::string> &p) {
					return p.second == s1;
				});
				m2[iter->first] = iter->second;
				m.erase(iter);
			}else if(str.find("RETURN") != std::string::npos) {
		     	sk.emplace(s1);
			}else if(str == "SHELVE") {
				while(!sk.empty()) {
					std::string s1 = sk.top();
					sk.pop();
					std::map<std::string, std::string>::iterator iter = std::find_if(m2.begin(), m2.end(), [s1](const std::pair<std::string, std::string> &p) {
						return p.second == s1;
					});
					m[iter->first] = iter->second;
				    m2.erase(iter);
				    std::map<std::string, std::string>::iterator iter2 = std::find_if(m.begin(), m.end(), [s1](const std::pair<std::string, std::string> &p) {
						return p.second == s1;
					});
					if(iter2 == m.begin()) std::cout << "Put " << s1 << "first" << "\n";
					else std::cout << "Put " << s1 << " after " << (--iter2)->second << "\n";	
				}
			}
		
		}
	}
	std::cout << "END" << "\n";
	return 0;
}