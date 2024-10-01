#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num,sum=0,digit;
	cin>>num;
	while(num!=0){
		digit=num%10;
		sum+=digit;
		num/=10;
	}
	cout<<sum;
	return 0;
}
