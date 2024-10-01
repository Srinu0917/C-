#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, rev = "";
    cout << "Enter a string: ";
    getline(cin, str);
    int i = str.length() - 1;
    while (i >= 0) {
        rev=rev+str[i--];
    }   
    cout << "Reversed string: " << rev << endl;
    cout << (str == rev ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
