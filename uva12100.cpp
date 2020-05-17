#include <iostream>
#include <queue>
int main(int argc, char const *argv[])
{
	int num;
	std::cin >> num;
	while(num--) {
		std::queue<std::tuple<int, int> > q; // tuple<v, pos>
		std::priority_queue<int> pq;
		int pos = 0, n, m;
		std::cin >> n >> m;
		for(int i = 0; i < n; i++) {
			int v;
			std::cin >> v;
			q.emplace(std::make_tuple(v, pos++));
			pq.emplace(v);
		}
		int time = 0;
		for(;;) {
			int v, p;
			std::tie(v, p) = q.front();
			if(v != pq.top()) {
				q.emplace(q.front());
				q.pop();
			}else {
				q.pop();
				pq.pop();
				time++;
				if(p == m) {
					std::cout << time << "\n";
					break;
			    }
			}
		}
	}
	return 0;
}