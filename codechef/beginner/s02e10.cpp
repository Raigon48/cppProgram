// 6-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int N, X, K;
		std::cin >> N >> X >> K;
		int ross[N];
		int russ[N];
		for(int i=0; i<N; i++) {
			int value;
			std::cin >> value;
			ross[i] = value;
		}
		int score = 0;
		for(int i=0; i<N; i++) {
			int value;
			std::cin >> value;
			int difference = std::abs(value - ross[i]);
			if(difference <= K) {
				score++;
			}
		}
		if(X <= score) {
			std::cout << "YES" << "\n";
		} else {
			std::cout << "NO" << "\n";
		}
	}
}