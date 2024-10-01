#include<iostream>
using namespace std;
int factorial(int n){
	return(n<=1) ? 1 : n*factorial(n-1);
}
int main(){
	int num;
	cout<<"enter the number = ";
	cin>>num;
	cout<<"factorial of "<<num<<" is"<<factorial(num);
	return 0;
}
