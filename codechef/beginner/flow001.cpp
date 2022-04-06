// 30-Mar-2022
#include<bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcase;
    int a, b;
    std::cin >> testcase;
    while(testcase--) {
        std::cin >> a >> b ;
        std::cout << (a+b) << "\n";
    }
}