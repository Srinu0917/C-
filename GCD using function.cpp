#include<iostream>
using namespace std;
int gcd(int a,int b){
	return(b==0) ? a : gcd(b,a%b);
}
int main(){
	int num1,num2;
	cout<<"enter numbr 1 = ";
	cin>>num1;
	cout<<"enter numbr 2 = ";
	cin>>num2;
	cout<<"GCD = "<<gcd(num1,num2);
	return 0;
}
