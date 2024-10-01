#include<iostream>
#include<string> 
using namespace std;
int main(){
    int rows;
    cout << "Enter rows = ";
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        cout << string(rows - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    for(int i = rows - 1; i >= 1; i--){
        cout << string(rows - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    return 0;
}
