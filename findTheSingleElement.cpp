#include <bits/stdc++.h>
using namespace std;

#define ll long long

int getSingleElement(vector<int> &a){
	int n = a.size();
	// Brute Force Approach
	// int ans = 0;
	// for(int i = 0;i < n;i++){
	// 	int count = 0;
	// 	for(int j = 0;j < n;j++){
	// 		if(a[i] == a[j]) count++;
	// 	}
	// 	if(count == 1) {
	// 		ans = a[i];
	// 		break;
	// 	}
	// }
	// return ans;

	// Better Solution 1
	// int maxi = 0;
	// for(int i = 0;i < n;i++){
	// 	maxi = max(maxi,a[i]);
	// }
	// int hash[maxi + 1]{0};
	// for(int i = 0;i < n;i++){
	// 	hash[a[i]]++;
	// }
	// int ans = 0;
	// for(int i = 1;i <= maxi;i++){
	// 	if(hash[i] == 1) {
	// 		ans = i;
	// 		break;
	// 	}
	// }
	// return ans;

	// Better Solution 2
	// 	int ans = 0;
	// 	map<ll,int> mp;
	// 	for(int i = 0;i < n;i++){
	// 		mp[a[i]]++;
	// 	}
	// 	for(auto it:mp){
	// 		if(it.second == 1){
	// 			ans = it.first;
	// 			break;
	// 		}
	// 	}
	// 	return ans;

	//Optimal Solution
	int ans = 0;
	for(int i = 0;i < n;i++){
		ans ^= a[i];
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
	int ans = getSingleElement(a);
	cout << ans << "\n";
}