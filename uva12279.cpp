#include <iostream>
#include <cstdlib>
int main() {
	int n = 0;
	int count = 0;
	while(std::cin >> n && n) {
		count++;
	    std::getchar();
	    int countOfReason = 0;
	    int countOfTreat = 0;
	    int v = 0;
		for(int i = 0; i < n; i++) {
			std::cin >> v;
			if(v) { countOfReason++; }
			else { countOfTreat++;	}
		}
		std::cout << "Case " << count << ": " << countOfReason - countOfTreat << std::endl;
	}
	system("pause");
	return 0;
}
