#include <iostream> 
using namespace std;
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;   
}                   
void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;   
}                    
void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;   
}                   
int main() {         
    int intArr[] = {1, 2, 3};
    double doubleArr[] = {1.1, 2.2, 3.3};
    char charArr[] = {'A', 'B', 'C'};
    printArray(intArr, 3);
    printArray(doubleArr, 3);
    printArray(charArr, 3);
    return 0;         
}
