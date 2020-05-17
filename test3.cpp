#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
int main(int argc, char const *argv[]) {
	std::string str1[3] {"a", "b", "c"};
	std::string str2[3] {"x", "y", "z"};
	std::vector<std::string> v[3];
	int count = 0;
	for(auto s1 : str1) {
		for(auto s2 : str2) {
			if((s1 == "a" && s2 == "x") || \
			   (s1 == "c" && s2 == "x") ||  (s1 == "c" && s2 == "z")) {
			}else {
				v[count].emplace_back(s1 + s2);
			}
		}
		count++;
	}
	for(auto s1 : v[0]) {
		for(auto s2 : v[1]) {
			for(auto s3 : v[2]) {
				int notes[3] {0};
				if(std::find(s1.begin(), s1.end(), 'x') != s1.end()) { notes[0]++; }
				if(std::find(s1.begin(), s1.end(), 'y') != s1.end()) { notes[1]++; }
				if(std::find(s1.begin(), s1.end(), 'z') != s1.end()) { notes[2]++; }
				if(std::find(s2.begin(), s2.end(), 'x') != s2.end()) { notes[0]++; }
				if(std::find(s2.begin(), s2.end(), 'y') != s2.end()) { notes[1]++; }
				if(std::find(s2.begin(), s2.end(), 'z') != s2.end()) { notes[2]++; }
				if(std::find(s3.begin(), s3.end(), 'x') != s3.end()) { notes[0]++; }
				if(std::find(s3.begin(), s3.end(), 'y') != s3.end()) { notes[1]++; }
				if(std::find(s3.begin(), s3.end(), 'z') != s3.end()) { notes[2]++; }
				if(notes[0] == 1 && notes[1] == 1 && notes[2] == 1) {
					std::cout << s1 << " " << s2 << " " << s3 << std::endl;
				}
			}
		}
	}
	return 0;
}