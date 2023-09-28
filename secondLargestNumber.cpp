#include <bits/stdc++.h>
using namespace std;

#define ll long long

int secondLargest(vector<int> &nums){
	// Brute Force
	// sort(nums.begin(), nums.end());
	// int ans = 0,n = nums.size();
	// for(int i = n - 2;i >= 0;i--){
	// 	if(nums[i] < nums[n - 1]){
	// 		ans = nums[i];
	// 		break;
	// 	}
	// }
	// return ans;

	// Better Approach
	// int secL = 0,l = 0,n = nums.size();
	// for(int i = 0;i < n;i++){
	// 	l = max(l,nums[i]);
	// }
	// for(int i = 0;i < n;i++){
	// 	if(secL < nums[i] && nums[i] != l){
	// 		secL = nums[i];
	// 	}
	// }
	// return secL;

	// Optimal Approach
	int secL = 0,l = nums[0],n = nums.size();
	for(int i = 0;i < n;i++){
		if(nums[i] > l){
			secL = l;
			l = nums[i];
		}
		else if(nums[i] > secL && nums[i] != l){
			secL = nums[i];
		}
	}
	return secL;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int ans = secondLargest(a);	
	cout << ans << "\n";
}