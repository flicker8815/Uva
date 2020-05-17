#include <iostream>
#include <cstdlib>
int main(){
    int now;
    int n[3];
    while(std::cin >> now >> n[0] >> n[1] >> n[2]  && (now || n[0] || n[1] || n[2])) {
     	std::cin.clear();
     	std::cin.ignore();
    	int d = 1080;
    	// step 1
    	if(now > n[0]) {
    		d += (now - n[0]) * 9;
    		now = n[0];
		}else {
			d += (40 - (n[0] - now)) * 9;
			now = n[0];
		}
		// step 2
	    if(now > n[1]) {
    		d += (40 - (now - n[1])) * 9 ;
    		now = n[1];
		}else {
			d += (n[1] - now) * 9;
			now = n[1];
		}
		// step 3
	    if(now > n[2]) {
    		d += (now - n[2]) * 9;
    		now = n[2];
		}else {
			d += (40 - (n[2] - now)) * 9;
			now = n[2];
		}
		std::cout << d << std::endl; 
	}
	system("pause");
	return 0;
}
