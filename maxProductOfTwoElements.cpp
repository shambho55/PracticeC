#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int maxProduct(vector<int> &nums){
	// sort(nums.begin(),nums.end());
	// int n = nums.size();
	// return (nums[n - 1] - 1) * (nums[n - 2] - 1);
	int ans = 0,ans1 = 0,n = nums.size();
	for(int i = 0;i < n;i++){
		ans = max(ans,nums[i]);
	}
	bool ch = true;
	for(int i = 0;i < n;i++){
		if(ans == nums[i] && ch){
			nums[i] = -1;
			ch = false;
		}
		else{
			ans1 = max(ans1,nums[i]);
		}
	}
	return (ans - 1) * (ans1 - 1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int ans = maxProduct(a);	
	cout << ans << "\n";
}