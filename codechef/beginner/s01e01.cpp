// 6-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int cookies;
		std::cin >> cookies;
		if(cookies >= 21) {
			std::cout << "yes" << "\n";
		} else {
			std::cout << "no" << "\n";
		}
	}
}