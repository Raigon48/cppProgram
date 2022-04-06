#include<bits/stdc++.h>
#include<iomanip>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int x;
    float y;
    std::cin >> x >> y;

    if((x%5 != 0) || ((float)(x+0.5) > y)) {
        std::cout << std::fixed << std::setprecision(2) << y << "\n";
    } else {
        std::cout << std::fixed << std::setprecision(2) << (y-(x+0.5)) << "\n";
    }
    return 0;
}