// 29-Mar-2022
#include<iostream>

int findMinimum(int x, int y) {
    return x >= y ? y : x;
}

int main() {
    int testcase;
    std::cin >> testcase;
    int x, m, d;
    while(testcase--) {
        std::cin >> x >> m >> d;
        std::cout << findMinimum((m*x), (x+d)) << std::endl;
    }
    return 0;
}