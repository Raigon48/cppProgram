// 5-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		long int X1, X2;
		std::cin >> X1 >> X2;
		if(X2 <= X1) {
			std::cout<< "YES" << "\n";
		} else {
			std::cout<< "NO" << "\n";
		}

	}
}