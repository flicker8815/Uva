#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
struct proposal{
	std::string proposal_name;
	int r;
	float d;
};
int main(void) {
	int n = 0, p = 0;
	int count = 0;
	while(std::cin >> n >> p && (n) && (p)) {
		if(count) printf( "\n" );
		std::cin.ignore();
		std::string str;
		for(int i = 0; i < n; i++) 
			std::getline(std::cin, str);

		proposal curr, best;
		
		best.r = 0;
		for(int i = 0; i < p; i++) {
			std::getline(std::cin, curr.proposal_name);
			(std::cin >> curr.d >> curr.r).ignore();
			for(int j = 0; j < curr.r; j++) 
				std::getline(std::cin, str);
			if(best.r < curr.r) {
				best = curr;
			}else if(best.r == curr.r && best.d > curr.d) {
				best = curr;
			}
		}
		 printf( "RFP #%d\n%s\n", ++count, best.proposal_name.c_str());
	}
	system("pause");
	return 0;
}

