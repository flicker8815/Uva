#include <iostream>
#include <vector>
#include <map>
int main(int argc, char const *argv[])
{
	int n, m, k, v;
	std::map<int, std::vector<int> > map;
	while(std::cin >> n >> m) {
		map.clear();
		for(int i = 0; i < n; i++) {
			std::cin >> v;
			map[v].emplace_back(i + 1);
		}
		for(int i = 0; i < m; i++) {
			std::cin >> k >> v;
			if(map[v].size() < k) std::cout << 0 << "\n";
			else std::cout << map[v][k - 1] << "\n";
		}
	}
	return 0;
}
