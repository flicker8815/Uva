#include <iostream>
#include <cstdlib> 
int main() {
	int t = 0;
	std::cin >> t;
	std::getchar();
	int i = 0;
	while(i++ < t) {
		int l, w, h;
		std::cin >> l >> w >> h;
		std::getchar();
		if(l > 20 || w > 20 || h > 20) {
			std::cout << "Case " << i << ": bad" << std::endl;
		}else {
			std::cout << "Case " << i << ": good" << std::endl;
		}
	}
	system("pause");
	return 0;
}
