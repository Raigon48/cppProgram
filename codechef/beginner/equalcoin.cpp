// 6-apr-2022
#include<bits/stdc++.h>

std::string divide(long int coin1, long int coin2) {
	if(coin1 > 0 && (coin1 + 2*coin2)%2 == 0) {
		return "YES";
	}
	else if((coin1 + 2*coin2)%4 == 0) {
		return "YES";
	} else {
		return "NO";
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase ;

	while(testcase--) {
		long int coin1, coin2;
		std::cin >> coin1 >> coin2;
		std::string result = divide(coin1, coin2);
		std::cout << result << "\n";

	}
}