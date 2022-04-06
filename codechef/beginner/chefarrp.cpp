// 5-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int arrLength;
		std::cin >> arrLength;
		int arr[arrLength];
		for(int i = 0; i < arrLength; i++) {
			std::cin >> arr[i];
		}

		int count = 0;
		
		for(int j = 0 ; j < arrLength; j++) {
			int sum = 0;
			int product = 1;
			for(int k = j; k <arrLength; k++) {
				sum = sum + arr[k];
				product = product * arr[k];
				if(product == sum) {
					count++;
				}
			}
		}
		std::cout << count << std::endl;

	}
}
