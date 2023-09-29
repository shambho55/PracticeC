#include <bits/stdc++.h>
using namespace std;

#define ll long long;	

bool isMonotonic(vector<int> &nums){
	int n = nums.size();
	bool ind = false,ind1 = false;
	for(int i = 1;i < n - 1;i++){
		if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]){
			return false;
		}
		else if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]){
			return false;
		}
		if(nums[i] < nums[i + 1]){
			ind = true;
		}
		if(nums[i] > nums[i + 1]){
			ind1 = true;
			if(ind) break;
		}
	}
	if(ind && ind1) return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	bool ans = isMonotonic(a);	
	cout << ans << "\n";
}