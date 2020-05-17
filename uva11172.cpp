#include <iostream>
#include <cstdlib>
int main(void) {
	int num = 0;
	std::cin >> num;
	int x, y;
	for(int i = 0; i < num; i++) {
		std::cin >> x >> y;
		if(x > y) {
			std::cout << ">" << std::endl;
		}else if(x < y) {
			std::cout << "<" << std::endl;
		}else {
			std::cout << "=" << std::endl; 
		}
	}
	system("pause");
	return 0;
}
