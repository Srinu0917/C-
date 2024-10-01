#include <iostream> 
using namespace std;
void sum(int a[], int b[], int size) {
    for (int i = 0; i < size; i++)
        cout << a[i] + b[i] << " ";
}
void sum(int a[2][2], int b[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << a[i][j] + b[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    cout<<"sum of two arrays : ";
    sum(arr1, arr2, 3);
    cout<<endl;
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    cout<<"sum of two matrices :"<<endl;
    sum(mat1, mat2);
    return 0;
}
