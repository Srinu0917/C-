#include <iostream>
using namespace std;
bool isprime(int n) {
    if (n < 2) {
    	return false;
	}
    for (int i = 2; i * i <= n; i++){
    	if (n % i == 0){
    		return false;
		}
	}
    return true;
}
int main() {
    int start, end;
    cout << "Enter range (start): ";
    cin >> start;
    cout << "Enter range (end): ";
    cin >> end;
    for (int i = start; i <= end; i++){
    	if (isprime(i)){
    		cout << i << " ";
		}	
	}
    return 0;
}
