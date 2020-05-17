#include <iostream>
#include <deque>
#include <string>
#include <sstream>
#include <vector>
int main(int argc, char const *argv[])
{
	int p, c, count = 0;
	while((std::cin >> p >> c) && (p || c)) {
		std::cout << "Case " << ++count << ":\n";
		std::cin.ignore();
		std::cin.clear();
		std::string str;
		std::deque<int> dq;
		std::stringstream ss;
		for(int i = 1; i <= p && i <= 1000; i++) {
			dq.emplace_back(i);
		}
		for(int i = 0; i < c; i++) {
			std::getline(std::cin, str);
 			if(str == "N") {
 				std::cout << dq.front() << "\n";
 			    dq.emplace_back(dq.front());
 			    dq.pop_front();
 			}
 			else {
 				int v;
 				ss.str(""); ss.clear();
	 			ss << str;
	 			ss >> str; ss >> v;
	 			std::deque<int>::iterator iter;
	 			for(iter = dq.begin(); iter != dq.end(); ++iter) 
	 				if(*iter == v) {
	 					dq.erase(iter);
	 					break;
	 			    }
	 			dq.emplace_front(v);
 			}
		}
	}
	return 0;
}