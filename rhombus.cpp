#include<iostream>
using namespace std;
int main(){
	int rows=6;
	for(int i=1;i<rows;i++){
		cout<<string(rows-i-1,' ')<<string(rows,'*')<<endl;
	}
	return 0;
}
