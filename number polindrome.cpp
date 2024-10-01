#include <iostream>
using namespace std;
int main() {
    int num, reversed = 0, original;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    cout << "Reversed: " << reversed << endl;
    cout << (original == reversed ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
