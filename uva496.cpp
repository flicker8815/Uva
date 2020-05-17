#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <sstream>
int main(int argc, char const *argv[])
{
	std::string str1, str2;
	std::stringstream ss;
	while(std::getline(std::cin, str1)) {
		std::getline(std::cin, str2);
		std::set<int> s1, s2, compS;
		ss.str(""); ss.clear();
		ss << str1;
		int v;
		while(ss >> v) s1.emplace(v);
		ss.str(""); ss.clear();
		ss << str2;
		while(ss >> v) s2.emplace(v);
		std::set_intersection(s1.begin(), s1.end(),
                                   s2.begin(), s2.end(),
                                   std::inserter(compS, compS.begin()));
		if(s1 == s2) std::cout << "A equals B\n";
        else if(compS == s1) std::cout << "A is a proper subset of B\n";
        else if(compS == s2) std::cout << "B is a proper subset of A\n";
        else if(compS.empty()) std::cout << "A and B are disjoint\n";
        else std::cout << "I'm confused!\n";
	}
	return 0;
}