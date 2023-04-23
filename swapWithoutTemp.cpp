#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t > 0){
		int a ,b;
		cin >> a >> b;
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
		cout << a << " " << b << endl;
		t--;
	}
	/*while(t > 0){
		int a , b;
		cin >> a >> b;
		a = a + b;
		b = a - b;
		a = a - b;
		cout << a << " " << b << endl;
		t--;
	}*/
}