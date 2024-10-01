#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the number = ";
	cin>>num;
	if(num==0){
		cout<<num<<" is Zero"<<endl;
	}
	if(num>0){
		cout<<num<<" is Positive"<<endl;
	}if(num<0){
		cout<<num<<" is negative"<<endl;
	}
	return 0;
}
