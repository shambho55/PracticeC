#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> twoSum(vector<int> &nums,int target){
	int n = nums.size(),i = 0,j = n - 1;
	vector<int> ans(2,0);
	//Brute Force Approach
	// for(int i = 0;i < n;i++){
	// 	for(int j = i + 1;j < n;j++){
	// 		if(nums[i] + nums[j] == target){
	// 			ans[0] = i;
	// 			ans[1] = j;
	// 			break;
	// 		}
	// 	}
	// }

	// Better Solution
	// map<int,int> mp;
	// for(int i = 0;i < n;i++){
	// 	if(mp.count(target - nums[i])){
	// 		ans[0] = mp[target - nums[i]];
	// 		ans[1] = i;
	// 		break;
	// 	}
	// 	mp[nums[i]] = i;
	// }

	//Optimal Solution
	while(i < j){
		if(nums[i] + nums[j] == target){
			ans[0] = i,ans[1] = j;
			break;
		}
		else if(nums[i] + nums[j] < target){
			i++;			
		}
		else{
			j--;
		}
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
	int target;	
	cin >> target;
	vector<int> ans = twoSum(a,target);
	for(int i = 0;i < 2;i++) cout << ans[i] << " ";
	cout << "\n";
}