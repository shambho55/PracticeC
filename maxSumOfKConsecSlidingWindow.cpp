#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define LL_MIN (-1e18)

using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	if(k <= 0 || k > n){
		cout << "invalid input!" << "\n";
		return;
	}
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	ll maxi = LL_MIN;
	ll curr_total = 0;
	for(int i = 0;i < n;i++){
		if(i < k) curr_total += a[i];
		if(i == k - 1) maxi = max(maxi,curr_total);
		else if(i >= k){
			curr_total -= a[i - k];
			curr_total += a[i];
			maxi = max(maxi,curr_total);
		}
	}
	cout << maxi << "\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cout << fixed;	
	cout << setprecision(10);

	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		solve();
	}
	return 0;
}