// 6-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int length;
		std::cin >> length;
		int people[length];
		for(int i=0; i<length; i++) {
			int val;
			std::cin >> val;
			people[i] = val;
		}
		int min = INT_MAX;
		int max = INT_MIN;
		int count = 1;
		int i = 0;
		while(i<length) {
			if(i < length-1) {
				if((people[i+1] - people[i]) <= 2) {
					count++;
				} else {
					if(count>=max) {
						max=count;
					}
					if(count <= min) {
						min = count;
					}
					count = 1;
				}
			}
			if(i == length-1) {
				if(count >= max) {
					max = count;
				}
				if(count <= min) {
					min = count;
				}
				count = 1;
			}
			i++;
		}
		
 		std::cout << min << " " << max << "\n";
	}
}