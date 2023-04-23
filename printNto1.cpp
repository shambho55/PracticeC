#include <iostream>
using namespace std;
	
void printNto1(int const &n){
	if(n == 0) return;
	else if(n == 1) cout << n;
	else cout << n << " ";
	printNto1(n - 1);
}

int main(){
	int n;
	cin >> n;
	printNto1(n);
}