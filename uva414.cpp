 #include <iostream>
#include <cstdlib>
#include <queue>
#include <string>
int main(int argc, char const *argv[])
{
	int N;
	std::cin >> N;
	std::getchar();
	while(N--) {
		std::priority_queue<int> pq;

		int max = -1, ans = 0;
		for(int i = 0; i < N; i++) {
			std::string s;
			int n = 0;
			std::getline(std::cin, s); 
			for(int j = 0; j < 25; j++) {
				if(s[j] == 'X') n++;
			}
			pq.emplace(n);
		}
		max = pq.top(); pq.pop();
		int pq_size = pq.size();
		for(int i = 0; i < pq_size; i++) {
			ans += max - pq.top();
			pq.pop();
		}
		std::cout << ans << "\n";
	}
	return 0;
}