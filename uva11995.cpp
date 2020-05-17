#include <iostream>
#include <queue>
#include <stack>
int main(int argc, char const *argv[])
{
	int n;
	while(std::cin >> n) {
		bool stack_flag = true, 
			 queue_flag = true, 
			 priqueue_flag = true;
		std::stack<int> s;
		std::queue<int> q;
		std::priority_queue<int> pq;

		int comm, x;
		while(n--) {
			std::cin >> comm >> x;
			if(comm == 1) {
				s.emplace(x);
				q.emplace(x);
				pq.emplace(x);
			}else {
				if(s.empty()) {
					stack_flag = queue_flag = priqueue_flag = false;
				}else {
					int v1, v2, v3;
					v1 = s.top(); s.pop();
					v2 = q.front(); q.pop();
					v3 = pq.top(); pq.pop();
					if(v1 != x) stack_flag = false;
					if(v2 != x) queue_flag = false;
					if(v3 != x) priqueue_flag = false;
				}
			}
		}
		if(stack_flag && (!queue_flag) && (!priqueue_flag)) std::cout << "stack\n";
		else if((!stack_flag) && queue_flag && (!priqueue_flag)) std::cout << "queue\n";
		else if((!stack_flag) && (!queue_flag) && priqueue_flag) std::cout << "priority queue\n";
		else if((!stack_flag) && (!queue_flag) && (!priqueue_flag)) std::cout << "impossible\n";
		else std::cout << "not sure\n";
	}
	return 0;
}