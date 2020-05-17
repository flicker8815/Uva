#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
int main(void) {
	int n = 0, b = 0, h = 0, w = 0;
	while(std::cin >> n >> b >> h >> w) {
		std::vector<int> costArray;
		for(int k = 0; k < h; k++) {
			int p_price = 0;
			int bednum[w] = {0};
			int cost = -1;
			std::cin >> p_price;
			for(int i = 0; i < w; i++) {
				std::cin >> bednum[i];
				if(bednum[i] >= n) {
					cost = p_price * n;
				}
			}
			if(cost <= b && (cost != -1)) {
				costArray.push_back(cost);
			}
		}
		auto min = std::min_element(std::begin(costArray), std::end(costArray));
		if(costArray.empty()) {
			std::cout << "stay home" << std::endl;
		}else {
			std::cout << *min << std::endl;
		}
	}
	system("pause");
	return 0;
}
