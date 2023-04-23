#include <iostream>
using namespace std;

int length(int const &n){
	int count = 0;
	for(int i = n;i > 0;i = i / 10){
		count++;
	}
	return count;
}
void printDigitsUsingRecursion(int const &n,int const &i){
	if(n == 0) return;
	printDigitsUsingRecursion(n / 10,i);	
	int len = length(n);
	if(len == i) cout << (n % 10);
	else cout << (n % 10) << " ";
}
int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	if(n == 0) cout << n;
	else printDigitsUsingRecursion(n,length(n));
	cout << endl;
	}
}