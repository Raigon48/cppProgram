// 6-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int D, C;
		std::cin >> D >> C;
		int firstDayCost = 0;
		int secondDayCost = 0;
		for(int i = 0; i < 3; i++) {
			int input;
			std::cin >> input;
			firstDayCost += input;
		}
		for(int i = 0; i < 3; i++) {
			int input;
			std::cin >> input;
			secondDayCost += input;
		}
		
		if( 2*D > C ) {
			if( firstDayCost >= 150 && secondDayCost >= 150 ) {
				std::cout << "YES" << std::endl;
			} else if (firstDayCost < 150 && secondDayCost < 150 ) {
				std::cout << "NO" << std::endl;
			} else {
				if( C < D ) {
					std::cout << "YES" << std::endl;
				} else {
					std::cout << "NO" << std::endl;
				}
			}
			
		} else {
			std::cout << "NO" << std::endl;
		}
	}
}