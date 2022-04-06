// 29-Mar-2022
#include<iostream>
using namespace std;

int main() {
    int testcase;
    std::cin >> testcase;
    int sa, sb, sc;
    while(testcase--) {
        std::cin >> sa >> sb >> sc;
        if((sb < sc) && (sb < sa)) {
            std::cout << "Bob" << std::endl;
        } else if ((sc < sb) && (sc < sa)) {
            std::cout << "Alice" << std::endl;
        } else {
            std::cout << "Draw" << std::endl;
        }
    }
    return 0;
}
