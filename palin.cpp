#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
	int r = 0;
	int temp = n;
	while(temp > 0){
		r = (r * 10) + (r % 10);
		temp = temp / 10;
	}
	if(r == n) return true;
	else return false;
}

int main(){
	int n;
	cin >> n;
	if(palindrome(n)){
		cout << "True" << "\n";
	}
	else {
		cout << "False" << "\n";
 	}
}