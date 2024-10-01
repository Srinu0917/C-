#include <iostream>
#include <cstring>
using namespace std;
void concatenate(const string &str1, const string &str2) {
    cout << "Concatenated String: " << str1 + str2 << endl;
}
void concatenate(const char *arr1, const char *arr2) {
    char result[100];
    strcpy(result, arr1);
    strcat(result, arr2);
    cout <<"Concatenated Character Array: " << result << endl;
}
int main() {
	string str1="srinu ";
	string str2="manchala";
	concatenate(str1,str2);
    concatenate("Hello, ", "World!");
    return 0;
}
