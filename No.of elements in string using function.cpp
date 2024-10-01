#include<iostream>
#include<string>
using namespace std;
int countelements(const string& str){
	return str.length();
}
int main(){
	string input="srinu";
	cout<<"No.of elements in string = "<<countelements(input);
	return 0;
}
