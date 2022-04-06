// 29-Mar-2022
#include<bits/stdc++.h>

int findReverseNumber(int num){
    int reverse = 0;
    while(num) {
        int remainder = num%10;
        reverse = (reverse * 10) + remainder;
        num = num/10;
    }
    return reverse;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcase;
    int num, result;
    std::cin >> testcase;
    while(testcase--) {
        std::cin >> num;
        result = findReverseNumber(num);
        std::cout << result << "\n";
    }
}