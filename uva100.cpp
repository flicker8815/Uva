#include <iostream>
#include <cstdlib>
#include <utility>
#include <algorithm>
/* Recursive.Ver */
/* 2019/05/04 Uva100 */
/*
	int findTheCycleLength(int, int);
	int main() {
		std::pair<int, int> PAIR;
		while(std::cin >> PAIR.first >> PAIR.second) {
			int max = 0;
			for(int i = PAIR.first; i <= PAIR.second; ++i) {
				if(i == 1) { max = 1; }
				else{ max = std::max(findTheCycleLength(i, 1), max); } 
			}
			std::cout << PAIR.first << " " << PAIR.second << " " << max << std::endl;    
		}
		system("pause");
		return 0;
	}
	int findTheCycleLength(int n, int l) {
		if(n == 1) { return l; }
		else if(n % 2 == 0) { findTheCycleLength((n / 2), l + 1); }
		else { findTheCycleLength((3 * n + 1), l + 1); }	
	}
*/
int findTheCycleLength(int, int);
int main() {
	std::pair<int, int> PAIR;
	while(std::cin >> PAIR.first >> PAIR.second) {
		int max = 1;
		int up = std::max(PAIR.first, PAIR.second);
		int down = std::min(PAIR.first, PAIR.second);
		for(int i = down; i <= up; ++i) {
			int n = i, l = 1;
			while(n != 1) {
				if(n % 2 == 0) { n /= 2; }
				else{ n = 3 * n + 1; }
				l++;
			}
			max = std::max(l, max);
		}
		std::cout << PAIR.first << " " << PAIR.second << " " << max << std::endl;    
	}
	system("pause");
	return 0;
}

