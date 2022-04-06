// 29-Mar-2022
#include<bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, k, t;
    int count = 0;
    std::cin >> n >> k;
    while(n--){
        std::cin >> t;
        if(t%k == 0) {
            count++;
        }
    }
    std::cout << count << "\n";
    return 0;

}