#include "/Users/lochieh/Desktop/Uva/bits/stdc++.h"
//#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
	int n, m , c, count = 0;
	while(std::cin >> n >> m >> c && (n || m || c)) {
		std::vector<int> vec;
		vec.resize(n);

		for(int &x : vec) {
			std::cin >> x;
		}

		std::vector<int> vec2;
		vec2.resize(n);

		int s = 0, max = 0;
		for(int i = 0; i < m; i++) {
			int x;
			std::cin >> x;

			if(vec2.at(x - 1)) {
				vec2.at(x - 1) = 0;
				s -= vec.at(x - 1);
			}else {
				vec2.at(x - 1) = 1;
				s += vec.at(x - 1);
			}

			max = std::max(s, max);
		}

		std::cout << "Sequence " << ++count << std::endl;
		if(max > c) {
			std::cout << "Fuse was blown." << std::endl;
		}else {
			std::cout << "Fuse was not blown." << std::endl;
			std::cout << "Maximal power consumption was " << max << " amperes." << std::endl;
		}
		std::cout << std::endl;
	}
	return 0;
}



