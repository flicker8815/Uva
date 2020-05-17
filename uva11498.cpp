#include <iostream>
#include <cstdlib>
int main(void) {
	int query_num = 0;
	int div_point[2] = {0, 0};
	std::cin >> query_num;
	
	while(query_num != 0) {
		std::cin >> div_point[0] >> div_point[1];
		for(int i = 0; i < query_num; i++) {
			int x = 0, y = 0;
			std::cin >> x >> y;
			if((x == div_point[0]) || (y == div_point[1])) {
				std::cout << "divisa" << std::endl;
			}else if((x < div_point[0]) && (y > div_point[1])) {
				std::cout << "NO" << std::endl;
			}else if((x > div_point[0]) && (y > div_point[1])) {
				std::cout << "NE" << std::endl;
			}else if((x > div_point[0]) && (y < div_point[1])) {
				std::cout << "SE" << std::endl;
			}else {
				std::cout << "SO" << std::endl;
			}
		}
		std::cin >> query_num;
	}
	system("pause");
	return 0;
}
