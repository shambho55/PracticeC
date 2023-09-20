#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int findDuplicate(vector<int> &nums){
	// Approach 1
	// int n = nums.size();
	// int l = 1,r = n - 1,it,mid;
	// while(l < r){
	// 	mid = (l + r) / 2;
	// 	it = 0;
	// 	for(int i = 0;i < n;i++){
	// 		if(nums[i] <= mid) it++;
	// 	}
	// 	if(it > mid) r = mid;
	// 	else l = mid + 1;
	// }
	// return l;

	// Approach 2
	// int n = nums.size();
	// int start = nums[0],end = nums[0];
	// do{
	// 	end = nums[nums[end]];
	// 	start = nums[start];
	// }while(start != end);
	// end = nums[0];
	// while(start != end){
	// 	end = nums[end];
	// 	start = nums[start];
	// }
	// return start;

	// Approach 3
	int n = nums.size();
	for(int i = 0;i < n;i++){
		int it = abs(nums[i]);
		if(nums[it] < 0) {
			return abs(nums[i]);
		}
		nums[it] *= -1;
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0;i < n;i++) cin >> nums[i];
	int dupl = findDuplicate(nums);	
	cout << dupl << "\n";
}