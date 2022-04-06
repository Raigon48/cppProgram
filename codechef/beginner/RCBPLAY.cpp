// 29-Mar-2022
#include<iostream>

int main() {
    int testcase;
    int X, Y, Z;
    std::cin >> testcase;
    while(testcase--) {
        std::cin >> X >> Y >> Z;
        if((2*Z) >= (Y-X)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}