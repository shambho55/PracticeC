#include <bits/stdc++.h>
using namespace std;

#define ll long long

int numSquares(int n){
	vector<int> a(n + 1);
	for(int i = 1;i <= n;i++){
		int mini = INT_MAX;
		for(int j = 1;(j * j) <= i;j++){
			mini = min(mini,a[i - (j * j)] + 1);
		}
	a[i] = mini;
	}
	return a[n];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int ans = numSquares(n);
	cout << ans << '\n';
}