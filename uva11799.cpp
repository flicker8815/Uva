#include <iostream>
#include <cstdlib>
#include <algorithm>
int main(void) {
	int t = 0;
	while(std::cin >> t) {
		for(int i = 0; i < t; i++) {
			int n = 0;
			std::cin >> n;
			int stu_num[n]{0};
			for(int j = 0; j < n; j++) {
				std::cin >> stu_num[j];
			}
			auto ptr = std::max_element(stu_num, stu_num + n);
			std::cout << "Case " << i + 1 << ": " << *ptr << std::endl; 
		}
	}
	system("pause");
	return 0;
}
