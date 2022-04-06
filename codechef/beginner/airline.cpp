// 5-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int a, b, c;
		std::cin >> a >> b >> c ;
		int d;
		int e;
		std::cin >> d >> e ;
		if(((a+b) <= d && c <= e) || ((b+c) <= d && a <= e) || ((c+a) <= d && b <= e)) {
			std::cout<< "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
	}
}
