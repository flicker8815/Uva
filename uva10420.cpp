#include "/Users/lochieh/Desktop/Uva/bits/stdc++.h"

int main(int argc, char const *argv[])
{
	int n = 0;
	std::cin >> n;
	std::getchar();

	//std::multiset<std::string> mmset;
	std::map<std::string, int> map;
	std::map<std::string, int>::iterator it;
	std::string str;
	std::stringstream ss("");
	while(n-- && std::getline(std::cin, str)) {
		ss << str;
		ss >> str;
		ss.str("");
		it = map.find(str);
		if(it != map.end()) {
			(it->second)++;
		}else {
			map.insert(std::pair<std::string, int>(str, 1));
		}
	}
	//std::multiset<std::string>::iterator it;
	//std::string f_str;
	for(it = map.begin(); it != map.end(); ++it) {
		std::cout << it->first << " " <<  it->second << std::endl;
	}
	return 0;
}