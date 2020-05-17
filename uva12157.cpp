#include "/Users/lochieh/Desktop/Uva/bits/stdc++.h"
//#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
	int t, c = 0;
	std::cin >> t;
	while(t--) {
		int n;
		int mile = 0, juice = 0;
		std::cin >> n;
		std::vector<int> vec;
		vec.resize(n);
		for(int &x : vec) {
			std::cin >> x;
			mile += ((x / 30) + 1) * 10;
			juice += ((x / 60) + 1) * 15;
			
		}
		std::cout << "Case " << ++c << ": ";
		if(mile < juice) {
			std::cout << "Mile " << mile << std::endl;
		}else if(mile > juice) {
			std::cout << "Juice " << juice << std::endl;
		}else {
			std::cout << "Mile Juice " << juice << std::endl;
		}
	}
	return 0;
}