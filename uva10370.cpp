#include <iostream>
#include <cstdlib>
#include <vector>
int main() {
	int c = 0;
	int i = 0;
	std::cin >> c;
	std::getchar();
	std::vector<int> vec;
	while(i++ < c) {
		int n = 0;
		int sum = 0;
		int up_ave = 0;
		float ave = 0.;
		std::cin >> n;
		vec.clear();
		vec.resize(n);
		for(int &x : vec) {
			std::cin >> x;
		    sum += x;
		}
		ave = sum / n;
		for(int x : vec) 
			if(ave < x) { up_ave++; }
		std::printf("%.3f%\n", 100 * (up_ave / (float)n));
	}
	system("pause");
	return 0;
}
