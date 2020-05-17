#include <iostream>
#include <cstdlib>

int main() {
	int t = 0; 
	(std::cin >> t).clear();
	std::cin.ignore();
	for(int i = 0; i < t; i++) {
		int m = 0, n = 0;
		(std::cin >> m >> n).clear(); 
		std::cin.ignore();
		m -= 2;
		n -= 2;
		int r = 0, c = 0;
		if(m % 3) {
			r = (m / 3) + 1;
		}else {
			r = m / 3;
		}
		if(n % 3) {
			c = (n / 3) + 1;
		}else {
			c = n / 3;
		}
		std::cout << r * c << std::endl;
	}
	
	system("pause");
	return 0;
}
