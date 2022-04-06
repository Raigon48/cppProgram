// 30-Mar-2022
#include<bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcase;
    std::cin >> testcase;
    int a, b, c;
    while(testcase--) {
        std::cin >> a >> b >> c ;
        if((a+b+c) == 180) {
            std::cout << "YES" << "\n";
        } else {
            std::cout << "NO" << "\n";
        }
    }
    return 0;
}