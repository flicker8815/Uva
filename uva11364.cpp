#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
int main() {
	int t = 0; 
	(std::cin >> t).clear();
	std::cin.ignore();
	for(int i = 0; i < t; i ++) {
		int n = 0;
		(std::cin >> n).clear();
		std::cin.ignore();
		std::vector<int> vec;
		vec.resize(n);
		for(auto &x : vec) {
			(std::cin >> x).clear();
			std::cin.ignore();
		}
	int max = *(std::max_element(vec.begin(), vec.end()));
	int min = *(std::min_element(vec.begin(), vec.end()));
	std::cout << (max - min) * 2 << std::endl;
	}
	system("pause");
	return 0;
}
