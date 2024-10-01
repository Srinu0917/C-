#include <iostream>
using namespace std;
long long factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}
double factorial(double n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}
int main() {
    int num = 5;
    double floatnum = 5.0;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    cout << "Factorial of " << floatnum << " is: " << factorial(floatnum) << endl;
    return 0;
}
