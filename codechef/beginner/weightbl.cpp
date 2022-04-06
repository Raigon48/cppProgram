// 5-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int w1, w2, x1, x2, M;
		std::cin >> w1 >> w2 >> x1 >> x2 >> M;
		float perMonthWeightChange = (float)(w2-w1)/M;
		if(perMonthWeightChange >= x1 && perMonthWeightChange <=x2) {
			std::cout << "1" << std::endl;
		} else {
			std::cout << "0" << std::endl;
		}
	}
}