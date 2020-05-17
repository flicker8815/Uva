#include <iostream>
#include <cstdlib>
#include <vector>
const unsigned int Max = -1;
int count = 0;
void mergeSort(std::vector<int> &, int, int);
void merge(std::vector<int> &, int, int, int);
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	int c = 0;
	while(std::cin >> n && n) {
		c++;
		std::vector<int> vec;
		vec.resize(n);
		for(auto &x : vec) 
			std::cin >> x;

		mergeSort(vec, 0, n - 1);
	    std::cout << count <<"\n";
	    count = 0;
	    //<< "Case #" << c << ": " 
	}
	return 0;
}
void mergeSort(std::vector<int> &vec, int front, int end) {
	if(front < end) {
		int mid = (front + end) / 2;
		mergeSort(vec, front, mid);
		mergeSort(vec, mid + 1, end);
		merge(vec, front, mid, end);
	}
}

void merge(std::vector<int> &vec, int front, int mid, int end) {
	std::vector<int> leftSubArray (vec.begin() + front, vec.begin() + mid + 1);
	std::vector<int> rightSubArray (vec.begin() + mid + 1, vec.begin() + end + 1);
    leftSubArray.insert(leftSubArray.end(), Max);
	rightSubArray.insert(rightSubArray.end(), Max);

	int leftIndex = 0, rightIndex = 0;
	for(int i = front; i <= end; i++) {
		if(leftSubArray[leftIndex] <= rightSubArray[rightIndex]) vec[i] = leftSubArray[leftIndex++];
		else {
			count += leftSubArray.size() - 1 - leftIndex;
			vec[i] = rightSubArray[rightIndex++];
		} 
	}
}








