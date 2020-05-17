#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
int main() {
	int n = 0;
	while(std::cin >> n) {
		std::vector<int> v1;
		v1.resize(n);
		for(auto &x : v1) {
			std::cin >> x;
		}
		std::vector<int> v2;
		v2.reserve(n - 1);
		std::vector<int>::iterator iter;
		for(iter = v1.begin(); iter != v1.end() - 1; ++iter) {
			v2.emplace_back(std::abs(*(iter + 1) - *iter));
		}
		std::sort(v2.begin(), v2.end(), [](int x, int y){ return x < y; });
		int c = 0;
		bool flag = true;
		if(n != 1) {
			for(auto x : v2) {
				if(x != (++c)) {
					flag = false;
					break;
				}
			}
		} 
		if(flag == false) {
			std::cout << "Not jolly" << std::endl;
		}else {
			std::cout << "Jolly" << std::endl;
		}
	} 
	system("pause");
	return 0;
}

