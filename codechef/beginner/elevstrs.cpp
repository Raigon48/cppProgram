// 5-apr-2022
#include<bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcase;
	std::cin >> testcase;

	while(testcase--) {
		int numOfFloor;
		int stairVelocity;
		int elevatorVelocity;
		std::cin >> numOfFloor >> stairVelocity >> elevatorVelocity;
		float stairDistance = numOfFloor * std::sqrt(2);
		float elevatorDistance = 2 * numOfFloor;
		float stairTime = stairDistance/stairVelocity;
		float elevatorTime = elevatorDistance/elevatorVelocity;
		if(stairTime > elevatorTime) {
			std::cout << "Elevator" << "\n";
		} else {
			std::cout << "Stairs" << "\n";
		}

	}
}