#include <iostream>
#include <stack>
#include <string>
#include <queue>
#include <sstream>
int main(int argc, char const *argv[])
{
	int n;
	std::stringstream ss;
	while(std::cin >> n && n) {
		std::getchar();
		std::string str;
		while(std::getline(std::cin, str) && str != "0") {
			std::stack<int> s;
			std::queue<int> q;
			ss.str(""); ss.clear(); ss << str;
			int v;
			while(ss >> v) q.emplace(v);
			for(int i = 1; i <= n; i++) {
				s.emplace(i);
				while((!s.empty()) && (q.front() == s.top())) {
					q.pop();
					s.pop();
				}
			}
			if(s.empty()) std::cout << "Yes\n";
			else std::cout << "No\n";
		}
		std::cout << "\n";
	}
	return 0;
}