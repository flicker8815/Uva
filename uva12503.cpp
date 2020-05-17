#include "/Users/lochieh/Desktop/Uva/bits/stdc++.h"
//#include <bits/stdc++.h>
std::vector<std::string> vec;
int p;
void sameAsX(std::string);
int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    std::getchar();
    while(t--) {
    	p = 0;
    	int n;
    	std::cin >> n;
    	std::getchar();
    	vec.resize(n);
    	for(auto &s : vec) {
    		std::getline(std::cin, s);
    		if(s == "RIGHT") {
    			p++;
    		}else if(s == "LEFT") {
    			p--;
    		}else {
                sameAsX(s);
    		}
    	}
    	std::cout << p << std::endl;
    }
	return 0;
}

void sameAsX(std::string s){
	std::stringstream ss;
	std::string s2;
    ss << s;
    for(int i = 0; i < 2; i++) {
    	ss >> s2;
    }
    int x;
    ss >> x;
    if(vec.at(x - 1) == "RIGHT") { ++p; }
    else if(vec.at(x - 1) == "LEFT") { --p; }
    else { sameAsX(vec.at(x - 1)); }
    ss.str("");
    ss.clear();
}

