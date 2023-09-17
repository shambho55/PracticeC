#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int maxScore(vector<int> &a,int k){
	int n = a.size();
	int preSum = 0;
	for(int i = 0;i < k;i++){
		preSum += a[i];
	}
	int ans = preSum;
	for(int i = k - 1;i >= 0;i--){
		ans -= a[i];
		ans += a[n - k + i];
		preSum = max(ans,preSum);
	}
	return preSum;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int k;
	cin >> k;
	int ans = maxScore(a,k);
	cout << ans << "\n";
}