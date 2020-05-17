#include <iostream>
#include <cstdlib>
#include <algorithm>

int main(void) {
    int h = 0, d = 0, f = 0;
    double u = 0.;
    while(std::cin >> h >> u >> d >> f && h != 0) {
    	double dif = u * (f / 100.0);
    	double final_dis = 0.;
    	int count_day = 1;
    	while(1) {
    		std::cout << u <<std::endl;
			if(u >= 0) {
				final_dis += u;
			}
			if(final_dis > h) { break; }
			final_dis -= d;
			if(final_dis < 0) { break; }
			++count_day;
		    u -= dif;
		    
 		}
    	
		if(final_dis >= h) {
			std::cout << "success on day " << count_day << std::endl;
		}else {
			std::cout << "failure on day " << count_day << std::endl;
		}
	}
	system("pause");
	return 0;
}
