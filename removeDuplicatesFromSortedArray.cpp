#include <bits/stdc++.h>
using namespace std;

#define ll long long

int removeDuplicates(vector<int> &nums){
	int n = nums.size(),k = 1;
	for(int i = 0;i < n - 1;i++){
		if(nums[i] != nums[i + 1]){
			nums[k++] = nums[i + 1];
		}
	}
	return k;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int ans = removeDuplicates(a);	
	cout << ans << "\n";
	for(int i = 0;i < ans;i++) cout << a[i] << " ";
	cout << "\n";
}