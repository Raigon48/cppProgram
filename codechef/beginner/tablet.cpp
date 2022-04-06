// 5-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int numberOfChoices;
		int budget;
		int max = 0;
		std::cin >> numberOfChoices >> budget;
		for(int i = 1; i <= numberOfChoices ; i++) {
			int width, height, price;
			std::cin >> width >> height >> price;
			if(price > budget) {
				continue;
			}
			int area = width * height;
			if(max < area) {
				max = area;
			}
		}
		if(max == 0) {
			std::cout << "no tablet" << std::endl;
		} else {
			std::cout << max << std::endl;
		}
	}
}