// 6-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int num;
		std::cin >> num;
		int count = 0;

		while(num > 0) {
			num = num - std::pow((int)std::sqrt(num), 2);
			count++;
		}

		std::cout << count << "\n";
	}
}