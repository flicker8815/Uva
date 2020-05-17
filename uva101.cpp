#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <string>
int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	std::getchar();
	std::vector<std::stack<int> > vec_stack(n);
	std::vector<int> reg(n, 0);
	for(int i = 0; i < n; i++) reg[i] = i;	//Initialize
	for(int i = 0; i < n; i++) vec_stack[i].emplace(i);	//Initialize
 	std::string str;
 	std::stringstream ss;
 	while(std::getline(std::cin, str) && str != "quit") {
 		ss.str(""); ss.clear();
 		int a, b;
 		std::string s1, s2;
 		std::stack<int> tempStack;
 		ss << str;
 		ss >> s1 >> a >> s2 >> b;
 		if((reg[a] != reg[b]) && (a != b)) {
 			if(s1 == "move") {
	 			if(s2 == "onto") {
	 				while(vec_stack[reg[a]].top() != a) {	//find a
	 					vec_stack[vec_stack[reg[a]].top()].emplace(vec_stack[reg[a]].top());
	 					reg[vec_stack[reg[a]].top()] = vec_stack[reg[a]].top();
	 					vec_stack[reg[a]].pop();
	 				}

	 				vec_stack[reg[a]].pop();	//pop a

	 				while(vec_stack[reg[b]].top() != b) {	//find b
	 					vec_stack[vec_stack[reg[b]].top()].emplace(vec_stack[reg[b]].top());
	 					reg[vec_stack[reg[b]].top()] = vec_stack[reg[b]].top();
	 					vec_stack[reg[b]].pop();
	 				}

	 				vec_stack[reg[b]].emplace(a);	//push a
	 				reg[a] = reg[b];
	 			}
	 			else {
	 				while(vec_stack[reg[a]].top() != a) {	//find a
	 					vec_stack[vec_stack[reg[a]].top()].emplace(vec_stack[reg[a]].top());
	 					reg[vec_stack[reg[a]].top()] = vec_stack[reg[a]].top();
	 					vec_stack[reg[a]].pop();
	 				}

	 				vec_stack[reg[a]].pop();	//pop a

	 				vec_stack[reg[b]].emplace(a);	//push a
	 				reg[a] = reg[b];
	 			}
	 		}
	 		else {
	 			if(s2 == "onto") {
	 				while(vec_stack[reg[a]].top() != a) {	//find a
	 					tempStack.emplace(vec_stack[reg[a]].top());	
	 					vec_stack[reg[a]].pop();
	 				}

	 				vec_stack[reg[a]].pop();	//pop a

	 				while(vec_stack[reg[b]].top() != b) {	//find b
	 					vec_stack[vec_stack[reg[b]].top()].emplace(vec_stack[reg[b]].top());
	 					reg[vec_stack[reg[b]].top()] = vec_stack[reg[b]].top();
	 					vec_stack[reg[b]].pop();
	 				}

	 				vec_stack[reg[b]].emplace(a);	//push a
					reg[a] = reg[b];

	 				while(!tempStack.empty()) { 	//return blocks
	 					vec_stack[reg[b]].emplace(tempStack.top());
	 					reg[tempStack.top()] = reg[b];
	 					tempStack.pop();
	 				}
	 			}
	 			else {
	 				while(vec_stack[reg[a]].top() != a) {	//find a
	 					tempStack.emplace(vec_stack[reg[a]].top());	
	 					vec_stack[reg[a]].pop();
	 				}
	 				vec_stack[reg[a]].pop();	//pop a

	 				vec_stack[reg[b]].emplace(a);	//push a
					reg[a] = reg[b];

					while(!tempStack.empty()) { 	//return blocks
	 					vec_stack[reg[b]].emplace(tempStack.top());
	 					reg[tempStack.top()] = reg[b];
	 					tempStack.pop();
	 				}
	 			}
	 		}
 		}
 	}
 	int i = 0;
 	std::stack<int> tempStack;
 	for(auto s : vec_stack) {
 		std::cout << i++ << ":";
 		while(!s.empty()) {
 			tempStack.emplace(s.top());
 			s.pop();
 		}
 		while(tempStack.size()) {
 			std::cout << " " << tempStack.top();
 			tempStack.pop();
 		}
 		std::cout << "\n";
 	}
	return 0;
}




