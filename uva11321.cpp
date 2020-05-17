#include "/Users/lochieh/Desktop/Uva/bits/stdc++.h"
//#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	int n = 0, m = 0;
	while(std::cin >> n >> m && n && m) {
		std::vector<int> vec;
		vec.resize(n);
		for(int &i : vec) {
			std::cin >> i;
		}
		std::sort(vec.begin(), vec.end(), [=](int x, int y) -> bool {
			if(x % m < y % m) 
				return x > y; 

			else if(x % m > y % m) 
				return x < y; 

            else {
            	if(x % 2 == 1 && y % 2 == 0) 
            		return y < x;
            	
            	else if(x % 2 == 0 && y % 2 == 1) 
            		return x < y;
            	
            	else if(x % 2 == 1 && y % 2 == 1) {
            		if(x > y) 
            			return x > y;

            		else 
            			return x < y;
            	}
            	else {
            		if(x > y) 
            			return x < y;

            		else 
            			return x > y;
            	}
            }
		});
		for (int i : vec) {
			std::cout << i << std::endl;
		}

	}
	return 0;
}