#include <bits/stdc++.h>
using namespace std;

#define ll long long
    

int findMaxLength(vector<int>& nums) {
int n = nums.size();
int sum = 0,ans = 0;
map<int,int> mp;
mp[0] = -1;
for(int i = 0;i < n;i++){
	if(nums[i] == 0) sum += (-1);
	else sum += nums[i];
	if(mp.count(sum) == 0) mp[sum] = i;   
	else if(mp.count(sum)){
	ans = max(ans,i - mp[sum]);
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
	int ans = findMaxLength(a);
	cout << ans << "\n";
}