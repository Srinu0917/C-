#include<iostream>
using namespace std;
int main(){  
	int num,t1=0,t2=1,nt;
	cout<<"enter the number = ";
	cin>>num;
	cout<<"Fainacci series = \n";
	for(int i=1;i<=num;i++){
		cout<<t1<<endl;
		nt=t1+t2;
		t1=t2;
		t2=nt;
	}         
	return 0;
}         
