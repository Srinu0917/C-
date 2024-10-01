#include <iostream>
#include <cmath>
int absolute(int num) {
    return (num < 0) ? -num : num;
}
double absolute(double num) {
    return fabs(num);
}
int main() {
    int intNum = -5;
    double floatNum = -3.14;
    std::cout << "Absolute value of " << intNum << " is " << absolute(intNum) << std::endl;
    std::cout << "Absolute value of " << floatNum << " is " << absolute(floatNum) << std::endl;
    return 0;
}
