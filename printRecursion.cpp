#include <iostream>
using namespace std;

void printRecursion(int const &n){
	if(n == 0){
		return;
	}
	cout << "I love Recursion" << endl;
	printRecursion(n - 1);
}
int main(){
	int n;
	cin >> n;
	printRecursion(n);
}