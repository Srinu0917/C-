#include<iostream>
using namespace std;
int main(){
	int rows=6;
	for(int i=rows-1;i>=1;i--){
		cout<<string(rows-i,' ')<<string(2*i-1,'*')<<endl;
	}
	return 0;
}
