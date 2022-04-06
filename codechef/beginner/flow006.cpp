// 29-Mar-2022
#include<bits/stdc++.h>

int findSumOfDigits(int num) {
    int sum=0;
    while(num) {
        int remainder = num%10;
        num = num/10;
        sum += remainder;
    }
    return sum;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcase;
    int num;
    std::cin >> testcase;
    while(testcase--) {
        std::cin >> num;
        int result = findSumOfDigits(num);
        std::cout << result << "\n";
    }
}