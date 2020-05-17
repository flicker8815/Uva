#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
int main(int argc, char const *argv[])
{
	int i = 0;
	while(std::cin >> i) {
		int sum = 0, count = 0;
		char last;
		bool same = false;
		std::string str, tree_list, num;
		std::vector<int> vec;

		while(std::getline(std::cin, str)) 
			tree_list += str;
        
		for(int j = 0; j < tree_list.length(); j++) {
			if(tree_list[j] == '(') {
				if(num != "") {
					vec.emplace_back(std::stoi(num));
					num = "";
				}
				count++;
				last = '(';
			}else if(tree_list[j] == ')') {
				if(last == '(') {
					count++;
					last = ')';
				}
			}else if(tree_list[j] == ' ') {
				// Do nothing
			}else {
				last = '0';
				count = 0;
				num += std::to_string(tree_list[j] - 48);
			}

			if(count == 4) {
				count = 0;
				last = '0';
				for(auto &x : vec) sum += x;
                if(sum == i) {
                	same = true;
                	break;
                }
                vec.pop_back();
                sum = 0;
			}
		}
		if(same) std::cout << "yes\n";
		else std::cout << "no\n";
	}
	return 0;
}
