#include <iostream>
using namespace std;
int main(){
	int a,b,c,n;
	cin >> a >> b >> c >> n;
	if((a >= 1) && (b >= 1) && (c >= 1) && (a + b + c) >= n){
		cout << "YES" << "\n";
	}
	else{
		cout << "NO" << "\n";
	}
	return 0;
}