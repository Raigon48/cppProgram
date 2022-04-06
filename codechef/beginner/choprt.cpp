// 29-Mar-2022
#include<bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcase;
    std::cin >> testcase;
    int a, b;
    while(testcase--) {
        std::cin >> a >> b ;
        char result = (a == b) ? '=' : (a > b) ? '>' : '<';
        std::cout << result << "\n";
    }
    return 0;
}