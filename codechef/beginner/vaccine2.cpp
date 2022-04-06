// 6-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int N, D;
		std::cin >> N >> D;
		int riskCount = 0;
		int notRiskCount = 0;
		for(int i = 0; i<N; i++) {
			int age;
			std::cin >> age;
			if(age >= 80 || age <= 9) {
				riskCount++;
			} else {
				notRiskCount++;
			}
		}
		int result = riskCount/D + notRiskCount/D ;
		if(riskCount%D != 0) {
			result++;
		}
		if(notRiskCount%D != 0) {
			result++;
		}
		std::cout << result << "\n";

	}
}