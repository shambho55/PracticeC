#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool checkSorted(vector<int> &nums){
	int n = nums.size();
	bool ans = true;
	for(int i = 0;i < n - 1;i++){
		if(nums[i + 1] < nums[i]){
			ans = false;
			break;
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
	bool ans = checkSorted(a);	
	cout << ans << "\n";
}