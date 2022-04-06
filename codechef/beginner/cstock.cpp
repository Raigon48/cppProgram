// 5-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int stockPrice;
		int lowerBound;
		int upperBound;
		int percentageChange;
		std::cin >> stockPrice >> lowerBound >> upperBound >> percentageChange;
		float currentStockPrice = (float)(stockPrice * (100 + percentageChange)/100);
		if(currentStockPrice >= lowerBound && currentStockPrice <= upperBound) {
			std::cout << "yes\n";
		} else {
			std::cout << "no\n";
		}

	}
}