#include<iostream>
using namespace std;
bool isprime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(i%n==0){
			return false;
		}
	}
	return true;
}
int main(){
	int start,end;
	cout<<"enter the start = ";
	cin>>start;
	cout<<"enter the end = ";
	cin>>end;
	for(int i=start;i<=end;i++){
		if(isprime(i)){
			cout<<i<<" ";
		}
	}
	return 0;
}
