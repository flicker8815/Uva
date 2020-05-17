#include <iostream>
#include <cstdlib>
#include <string>
int main(int argc, char const *argv[])
{
    int n = 0;
    std::string blank;
    std::cin >> n;
    int count = n;
    int w = 0;
    while(std::cin >> w && count--) {
    	int n = 0;
    	int s = 0;
    	int diff = 0;
    	bool flag = true;
    	for(int i = 0; i < w; i++) {
    		std::cin >> n >> s;
    		if(i == 0) {
    			diff = n - s;
    		}else {
    			if((n - s) != diff) {
    				flag = false;
    			}
    		}
    	}
    	if(flag) {
    		std::cout << "yes" << std::endl;
    	}else {
    		std::cout << "no" << std::endl;
    	}
    	if(count)
    		std::endl(std::cout);
    }
	return 0;
}
