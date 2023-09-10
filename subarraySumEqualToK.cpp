#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int subArraySum(vector<int> &nums,int k){
	//Approach 1
	// vector<int> pref(20005);
	// int n = nums.size();
	// int total = 0;
	// for(int i = 0;i < n;i++){
	// 	pref[i + 1] = pref[i] + nums[i];
	// }
	// for(int i = 0;i <= n;i++){
	// 	for(int j = i + 1;j <= n;j++){
	// 		if(pref[j] - pref[i] == k) total++;
	// 	}
	// }
	// return total;
	// T.C => O(n^2) S.C => O(n);

	//Approach 2
	// int count = 0;
	// int n = nums.size();
	// for(int i = 0;i < n;i++){
	// 	int ans = nums[i];
	// 	for(int j = i + 1;j < n;j++){
	// 		ans += nums[j];
	// 		if(ans == k) count++;
	// 	}
	// 	if(nums[i] == k) count++;
	// }
	// return count;
	// T.C => O(n ^ 2) S.C => O(n);

	// Better Approach
	int count = 0,ans = 0;
	map<int,int> mp;
	mp[0] = 1;
	int n = nums.size();
	for(int i = 0;i < n;i++){
		ans += nums[i];
		if(mp.count(ans - k)){
			count += mp[ans - k];
		}
		mp[ans] += 1;
	}
	return count;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0;i < n;i++) cin >> nums[i];
	int k;	
	cin >> k;
	int ans = subArraySum(nums,k);
	cout << ans << "\n";
}