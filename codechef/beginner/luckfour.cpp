// 30-Mar-2022
#include<bits/stdc++.h>

int countFourOccurence(int num) {
    int count = 0;
    while(num) {
        if(num%10 == 4) {
            count++;
        }
        num = num/10;
    }
    return count;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcase;
    std::cin >> testcase;
    while(testcase--) {
        int num;
        std::cin >> num;
        int count = countFourOccurence(num);
        std::cout << count << "\n";
    }
    return 0;
}