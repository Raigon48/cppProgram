// 6-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int a, b, p, q;
		std::cin >> a >> b >> p >> q;
		if(a==p && b==q) {
			std::cout << "0" << "\n";
		} else if ((a+b)%2 == (p+q)%2) {
			std::cout << "2" << "\n";
		} else {
			std::cout << "1" << "\n";
		}
	}
}