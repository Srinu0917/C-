#include<iostream>
using namespace std;
int max(int a,int b){
	return (a>b) ? a : b;
}
float maxi(float a,float b){
	return (a>b) ? a : b;
}
char maxii(char a,char b){
	return (a>b) ? a : b;
}
int main(){
	int a=3,b=5;
	cout<<"max of "<<a<<" and "<<b<<" = "<<max(a,b)<<endl;
	float c=2.1,d=7.8;
	cout<<"max of "<<c<<" and "<<d<<" = "<<maxi(c,d)<<endl;
	char e='x',f='z';
	cout<<"max of "<<e<<" and "<<f<<" = "<<maxii(e,f)<<endl;
	return 0;
}
