#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"enter the value of (a) = ";
	cin>>a;
	cout<<"enter the value of (b) = ";
	cin>>b;
	cout<<"enter the value of (c) = ";
	cin>>c;
    int largest = (a>b) ? (a>c ? a:c) : (b>c ? b:c);
    cout << "The largest number is: " << largest << endl;
    return 0;
}
