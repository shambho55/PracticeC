#include <bits/stdc++.h>
using namespace std;

#define ll long long

void countingSort(vector<int> &nums){
	int n = nums.size(),max_ele = 0,min_ele = INT_MAX,j = 0;
	map<int,int> mp;
	for(int i = 0;i < n;i++){
		mp[nums[i]]++;
		min_ele = min(min_ele,nums[i]);
		max_ele = max(max_ele,nums[i]);
	}
	for(int i = min_ele;i <= max_ele;i++){
		while(mp[i] > 0){
			nums[j++] = i;
			mp[i]--;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	countingSort(a);	
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";
}