#include <bits/stdc++.h>
using namespace std;

#define ll long long

int minMoves2(vector<int> &a){
	int n = a.size();
	int mid = (n / 2);
	int ans = 0;
	for(int i = 0;i < n;i++){
		ans += abs(a[mid] - a[i]);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int ans = minMoves2(a);	
	cout << ans << "\n";
}