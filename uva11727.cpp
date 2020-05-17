#include <iostream>
#include <cstdlib>
int main() {
	int test_num = 0;
	std::cin >> test_num;
	for(int i = 1; i <= test_num; i++) {
		int salary[3];
		std::cin >> salary[0] >> salary[1] >> salary[2];
		
		if((salary[0] > salary[1]) && (salary[0] < salary[2]) || (salary[0] > salary[2]) && (salary[0] < salary[1])) {
		   		std::cout << "Case " << i << ": " << salary[0] << std::endl;
		   }
		else if((salary[1] > salary[0]) && (salary[1] < salary[2]) || (salary[1] > salary[2]) && (salary[1] < salary[0])) {
		   		std::cout << "Case " << i << ": " << salary[1] << std::endl;
		   }
		else {
			std::cout << "Case " << i << ": " << salary[2] << std::endl;
		}
	}
	system("pause");
	return 0;
} 
