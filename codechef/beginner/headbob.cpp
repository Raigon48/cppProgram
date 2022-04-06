// 5-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int stringLength;
		std::cin >> stringLength;
		int indianTrait = 0;
		int foreignTrait = 0;
		for(int i = 0; i < stringLength; i++) {
			char character;
			std::cin >> character;
			if(character == 'Y') {
				foreignTrait++;
			}
			if(character == 'I') {
				indianTrait++;
			}
		}

		if(indianTrait > 0 && foreignTrait == 0) {
			std::cout<< "INDIAN" << "\n";
		} else if(indianTrait == 0 && foreignTrait > 0) {
			std::cout<< "NOT INDIAN" << "\n";
		} else {
			std::cout<< "NOT SURE" << "\n";
		}

	}

}