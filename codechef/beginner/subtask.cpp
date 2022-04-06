// 6-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int N, M, K;
		std::cin >> N >> M >> K;
		int score = 0;
		int continuosRun = 1;
		int firstFailedCase = -1;
		for(int i = 0 ; i < N ; i++) {
			int val;
			std::cin >> val;
			if(val == 0 && firstFailedCase < 0) {
				firstFailedCase = i+1;
			}
			if(val == 1) {
				score++;
			}
		}
		if(score == N) {
			std::cout << "100" << "\n";
		} else if ((firstFailedCase - 1) >= M) {
			std::cout << K << "\n";
		} else {
			std::cout << "0" << "\n";
		}
	}
}