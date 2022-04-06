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
		int sequence[N] = {0};
		for(int i=0; i<M; i++) {
			int file;
			std::cin >> file;
			sequence[file-1] += 1;
		}
		for(int i=0; i<K; i++) {
			int file;
			std::cin >> file;
			sequence[file-1] += 1;
		}
		int trackIgnored = 0;
		int untrackUnignored = 0;
		for(int i = 0 ; i< N; i++) {
			if(sequence[i] == 2) {
				trackIgnored++;
			}
			if(sequence[i] == 0) {
				untrackUnignored++;
			}
		}
		std::cout << trackIgnored << " " << untrackUnignored << "\n";
	}
}