#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>
//#include <fstream>
int main(int argc, char const *argv[])
{
	//std::ofstream fout("/Users/lochieh/Desktop/test.txt");
	int N = 0;
	std::stringstream ss;
	std::string str;
	std::cin >> N;
	std::getchar();

	while(N--) {
		std::map<int, std::string> map;
		std::vector<int> key;
		std::vector<std::string> value;
		std::getline(std::cin, str);
		int n = 0;
		std::string s = "";

		std::getline(std::cin, str);
		ss.clear();
        ss.str("");
		ss << str;
		while(ss >> n) 
			key.emplace_back(n);

		std::getline(std::cin, str);
		ss.clear();
        ss.str("");
		ss << str;
	    while(ss >> s)
			value.emplace_back(s);

		for(int i = 0; i < key.size(); i++) 
			map.emplace(std::make_pair(key[i], value[i]));

		for(auto const& entry : map) {
			//fout << entry.second << "\n";
			std::cout << entry.second << "\n";
		}
		//fout << std::endl;
		std::cout << "\n "[N == 0];
	}
	return 0;
}