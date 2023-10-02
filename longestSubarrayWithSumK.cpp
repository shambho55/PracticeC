#include <bits/stdc++.h>
using namespace std;

#define ll long long

int longestSubarrayWithSumK(vector<ll> &a,int k){
	ll n = a.size();
	//Brute force Approach
	// int l = 0;
	// for(int i = 0;i < n;i++){
	// 		int sum = 0;
	// 	for(int j = i;j < n;j++){
	// 		sum += a[j];
	// 		if(sum == k) l = max(l,j - i + 1);
	// 	}
	// }
	// return l;

	//Better Approach
	// map<ll,int> mp;
	// ll prefSum = 0,ans = 0;
	// for(ll i = 0;i < n;i++){
	// 	prefSum += a[i];
	// 	if(prefSum == k){
	// 		ans = max(ans,i + 1);
	// 	}
	// 	else if(mp.count(prefSum - k)){
	// 		ans = max(ans,i - mp[prefSum]);
	// 	}
	// 	if(!mp.count(prefSum)) mp[prefSum] = i;
	// 	// mp[prefSum] = i;
	// }
	// return ans;

	//Optimal Solution
	ll i = 0,j = 0,sum = a[i],ans = 0;
	while(j < n){
	// 	if(sum <= k){
	// 		sum += a[j];
	// 		ans = max(ans,j - i);
	// 		j++; 
	// 	}
	// 	else if(sum > k){
	// 		sum -= a[i];
	// 		i++;
	// 	}
	// 	cout << sum << " ";
	// }
		while(i <= j && sum > k){
			sum -= a[i];
			i++;
		}
		if(sum == k){
			ans = max(ans,j - i + 1);
		}
		j++;
		// cout << sum << " ";
		if(j < n) sum += a[j];
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n,k;
	cin >> n >> k;
	vector<ll> a(n);
	for(ll i = 0;i < n;i++) cin >> a[i];	ll ans = longestSubarrayWithSumK(a,k);
	cout << ans << "\n";
}