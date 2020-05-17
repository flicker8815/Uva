#include "/Users/lochieh/Desktop/Uva/bits/stdc++.h"
//#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	std::cout << "Lumberjacks:" << std::endl;
	while(n--) {
		std::vector<int> vec;
		vec.resize(10);
		int count = 0, temp;
        bool MaxFlag = true, MinFlag = true;

		for(int &x : vec) {
			std::cin >> x;
			if(count == 0) {
				temp = x;
			}else {
				if(x < temp) {
					MaxFlag = false;
				}
				if(x > temp) {
					MinFlag = false;
				}
				temp = x;
			}
			count++;
		}
	    if(MaxFlag || MinFlag) {
	    	std::cout << "Ordered" << std::endl;
	    }else {
	    	std::cout << "Unordered" << std::endl;
	    }
	}
	return 0;
}