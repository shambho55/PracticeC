#include <iostream>
using namespace std;

int binary(int n){
	if(n == 0){
		return 0;
	}
	int smallOutput = binary(n / 2);
	return smallOutput * 10 + (n % 2);
}

int main(){
	int t;
	cin >> t
	while(t--){
		int n;
		cin >> n;
		cout << binary(n) << endl;
	}
}