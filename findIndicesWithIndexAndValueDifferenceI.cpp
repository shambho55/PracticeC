#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> findIndices(vector<int> &nums,int indexDifference,int valueDifference){
	vector<int> ans(2,-1);
	int n = nums.size();
	for(int i = 0;i < n;i++){
		for(int j = i + indexDifference;j < n;j++){
			if(abs(nums[i] - nums[j]) >= valueDifference){
				ans[0] = i,ans[1] = j;
				break;
			}
		}
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0;i < n;i++) cin >> a[i];
		int indexDifference,valueDifference;
		cin >> indexDifference >> valueDifference;
		vector<int> ans = findIndices(a,indexDifference,valueDifference);
		for(int i = 0;i < ans.size();i++) cout << ans[i] << " ";
		cout << "\n";
	}
}