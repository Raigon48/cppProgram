// 29-Mar-2022
#include<bits/stdc++.h>

int findFirstAndLastDigitSum( int num) {
    int lastNum = num%10;
    while(num > 9) {
        num = num/10;
    }
    int firstNum = num;
    return firstNum + lastNum;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcase;
    std::cin >> testcase;
    int num, sum;

    while(testcase--) {
        std::cin >> num;
        sum = findFirstAndLastDigitSum(num);
        std::cout << sum << "\n";
    }
    return 0;
}