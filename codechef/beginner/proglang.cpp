// 4-Apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int n[6];
		for(int i = 0; i < 6 ; i++) {
			std::cin >> n[i];
		}
		if((n[0] == n[2] && n[1] == n[3]) || (n[1] == n[2] && n[0]==n[3])) {
			std::cout << "1" << std::endl;
		} else if((n[0] == n[4] && n[1] == n[5]) || (n[1] == n[4] && n[0]==n[5])) {
			std::cout << "2" << std::endl;
		} else {
			std::cout << "0" << std::endl;
		}
	}

}