#include <iostream>
#include <vector>
#include <queue>
int main(int argc, char const *argv[])
{
	int n;
	while(std::cin >> n && n) {
		std::queue<int> q;
		std::vector<int> vec;
		for(int i = 1; i <= n; i++) q.emplace(i);
		while(q.size() != 1) {
			vec.emplace_back(q.front());
			q.pop();
			q.emplace(q.front());
			q.pop();
		}
		std::cout << "Discarded cards:";
		if(n == 1) std::cout << "\n";
		else {
			std::cout << " ";
			for(int i = 0; i < vec.size(); i++) {
			std::cout << vec[i] << ",\n"[i == vec.size() - 1];
			if(i != vec.size() - 1) std::cout << " ";
			}	
		}
		std::cout << "Remaining card: " << q.front() << "\n";
	}
	return 0;
}