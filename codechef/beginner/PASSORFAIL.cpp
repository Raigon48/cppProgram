// 29-Mar-2022

#include<iostream>

int main() {
    int testCase;
    int N, X, P;
    std::cin >> testCase;
    while(testCase--) {
        std::cin >> N >> X >> P;
        if((X*3 - (N-X) >= P)) {
            std::cout << "Pass" << std::endl;
        } else {
            std::cout << "Fail" << std::endl;
        }
    }
    return 0;
}