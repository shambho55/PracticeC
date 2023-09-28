#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> rotateArray(vector<int> &nums){
	int n = nums.size();
	int st = nums[0], ls = nums[n - 1],temp = 0;
	for(int i = n - 2;i >= 0;i--){
		temp = nums[i];
		nums[i] = ls;
		ls = temp;
	}
	nums[n - 1] = st;
	return nums;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	vector<int> ans;	
	ans = rotateArray(a);
	for(int i = 0;i < n;i++) cout << ans[i] << " ";
	cout << "\n";
}