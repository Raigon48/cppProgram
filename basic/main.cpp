#include <iostream>
#include <iomanip>

int main() {
    short num1 {123};
    int num2 {1234567890};
    float num3 {12345678.0f};
    double num4 {123456789012345};
    long double num5 {123456.1234567890123456789012345L};
    
    std::cout << "number3: " << sizeof(num3) << std::endl;
    std::cout << "number4: " << sizeof(num4) << std::endl;
    std::cout << "number5: " << sizeof(num5) << std::endl;

    std::cout << std::setprecision(40) << std::endl;
    std::cout << "Number1 : " << num1 << std::endl;
    std::cout << "Number2 : " << num2 << std::endl;
    std::cout << "Number3 : " << num3 << std::endl;
    std::cout << "Number4 : " << num4 << std::endl;
    std::cout << "Number5 : " << num5 << std::endl;

    return 0;
}