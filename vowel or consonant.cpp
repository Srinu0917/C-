#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter the charecter = ";
	cin>>ch;
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' && ch=='A'||ch=='A'||ch=='I'||ch=='O'||ch=='U'){
			cout<<ch<<" is vowel"<<endl;
		}else{
			cout<<ch<<" is consonent"<<endl;
		}
	}
	return 0;
}
