#include <iostream>
#include <algorithm>
using namespace std;
void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}
int main() {
    int arry[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arry) / sizeof(arry[0]);
    sortArray(arry, size);
    cout << "Sorted Integer Array: ";
    for (int i = 0; i < size; i++) {
        cout << arry[i] << " ";
    }
    cout << endl;
    return 0;
}
