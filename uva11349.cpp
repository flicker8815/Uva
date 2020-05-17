#include <iostream>
#include <cstdlib>
#include <vector>
int main(int argc, char const *argv[])
{
	int t, count = 0;
	std::cin >> t;
	std::getchar();
	while(t--) {
		count++;
		char temp;
		int n;
	    bool sym = true;
		std::cin >> temp >> temp >> n;
		std::getchar();
 
		std::vector<std::vector<long int>> vec(n, std::vector<long int>(n));
		for(int y = 0; y < n; y++) {
			for(int x = 0; x < n; x++) {
				std::cin >> vec[y][x];
				if(vec[y][x] < 0) {
					sym = false;
				}
			}
			std::getchar();
		}
		for(int y = 0; y < n; y++) {
			for(int x = 0; x < n; x++) {
				int x2 = n - x - 1;
				int y2 = n - y - 1;
				if(vec[y][x] != vec[y2][x2]) {
					sym = false;
					break;
				}
			}
		}
		if(sym) std::cout << "Test #" << count << ": Symmetric.\n";
		else std::cout << "Test #" << count << ": Non-symmetric.\n";
	}
	return 0;
}