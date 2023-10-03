#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPalindrome(string s,int n,int i){
	if(i >= (n / 2)) return true;
	if(s[i] != s[n - i - 1]) return false;
	return isPalindrome(s,n,i + 1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(isPalindrome(s,n,0)) cout << 1 << "\n";
	else cout << 0 << "\n";
}