#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int factorial(int n){
	if(n == 0) return 1;
	return n * factorial(n - 1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int ans = factorial(n);
	cout << ans << "\n";
}