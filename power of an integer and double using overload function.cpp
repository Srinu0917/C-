#include<iostream>
#include<cmath>
using namespace std;
int power(int base,int exponent){
	return pow(base,exponent);
}
double power1(double base,double exponent){
	return pow(base,exponent);
}
int main(){
	cout<<power(4,4)<<endl;
	cout<<power1(2.3,4.6);
	return 0;
}
