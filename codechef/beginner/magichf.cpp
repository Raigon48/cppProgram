// 5-apr-2022
#include<bits/stdc++.h>

int swap(int A, int B, int coinLocation) {
	if(coinLocation == A) return B;
	if(coinLocation == B) return A;
	return coinLocation;
}



int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int N, X, S;
		std::cin >> N >> X >> S;
		int coinLocation = X;
		for(int i=0; i<S; i++) {
			int A, B;
			std::cin >> A >> B;
			coinLocation = swap(A, B, coinLocation);
		}
		std::cout << coinLocation << "\n";
	}
}
