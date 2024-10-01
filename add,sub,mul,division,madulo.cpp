#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"enter the value of (a) = ";
	cin>>a;
	cout<<"enter the value of (b) = ";
	cin>>b;
	cout<<"Addition = "<<a+b<<endl;
    cout<<"subraction = "<<a-b<<endl;
	cout<<"Multiplication = "<<a*b<<endl;	
	if(b!=0){
		cout<<"Division = "<<a/b<<endl;
	}else{
		cout<<"It is infiniti"<<endl;
	}
	return 0;
}
