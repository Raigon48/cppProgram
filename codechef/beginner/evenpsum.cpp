// 6-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		long int n1, n2;
		std::cin >> n1 >> n2;
		long int numOfOddN1, numOfEvenN1, numOfOddN2, numOfEvenN2;
		if(n1 % 2 == 0) {
			numOfOddN1 = n1/2;
			numOfEvenN1 = n1/2;
		} else {
			numOfOddN1 = (n1/2) + 1;
			numOfEvenN1 = n1/2;
		}
		if(n2 % 2 == 0) {
			numOfOddN2 = n2/2;
			numOfEvenN2 = n2/2;
		} else {
			numOfOddN2 = (n2/2) + 1;
			numOfEvenN2 = n2/2;
		}
		long int result = (numOfOddN1 * numOfOddN2) + (numOfEvenN1 * numOfEvenN2);
		std::cout << result << "\n";
	}
}