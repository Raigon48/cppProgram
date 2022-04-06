// 5-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int linak, bob;
		std::cin >> linak >> bob;
		for(int i = 1; i > 0; i++) {
			if(i%2 == 0) {
				bob -= i;
			} else {
				linak -= i;
			}
			if(bob<0) {
				std::cout << "Limak" << std::endl;
				break;
			}
			if(linak < 0) {
				std::cout << "Bob" << std::endl;
				break;
			}
		}
	}
}