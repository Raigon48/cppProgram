// 30-Mar-2022
#include<bits/stdc++.h>
#include<string>

std::string getShipClass(char code) {
    if(code == 'B' || code == 'b') {
        return "BattleShip";
    } else if (code == 'C' || code == 'c') {
        return "Cruiser";
    } else if (code == 'D' || code == 'd') {
        return "Destroyer";
    } else if (code == 'F' || code == 'f') {
        return "Frigate";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcase;
    std::cin >> testcase;

    while(testcase--) {
        char code;
        std::cin >> code;
        std::cout << getShipClass(code) << "\n";
    }
    return 0;
}