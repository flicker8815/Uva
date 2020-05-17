#include <iostream>
#include <cstdlib>
#include <vector>
int main(int argc, char const *argv[])
{
	int a = 0, b = 0;
	while(std::cin >> a >> b && a && b) {
		std::vector<int> vec_A;
	
		vec_A.resize(a);
	    int numOfA = 0;
	    int numOfB = 0;
	    int s = 0;
		for(int &x : vec_A) {
			std::cin >> x;
			if(s != x) {
				numOfA++;
				s = x;
			}
		}
		s = 0;
		int same_Count = 0;
		int tem = 0;
		int same_Num = 0;

		for(int i = 0; i < b; i++) {
			std::cin >> tem;
			if(s != tem) {
				numOfB++;
				s = tem;
			}
			for(int x : vec_A) {
				if(tem == x && same_Num != tem) {
					same_Num = tem;
					same_Count++;
					break;
				}
			}
		}
		std::cout << std::min(numOfA  ,numOfB) - same_Count << std::endl;
	}
	return 0;
}