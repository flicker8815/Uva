#include <iostream>
#include <cstdlib>
int main(int argc, char const *argv[])
{
	int n = 0;
	std::cin >> n;
	std::getchar();

	int i = 0;
	int f = 0;
	while(std::cin >> f && (i++) < n) {
		std::getchar();
		long long int total = 0.;
		long long int s = 0;
		int a = 0;
		long long int e = 0;
		for(int i = 0; i < f; i++) {
			(std::cin >> s >> a >> e).clear();
			std::cin.ignore();
			total += s * e;
		}
		std::printf("%lld\n", total);
	}
	return 0;
}