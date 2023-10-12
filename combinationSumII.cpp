#include <bits/stdc++.h>
using namespace std;

#define ll long long

void combinationSumII(vector<int> &a,int ind,int n,int target,vector<int> &temp,vector<vector<int>> &arr){
	if(target == 0){
		arr.push_back(temp);
		return;
	}
	for(int i = ind;i < a.size();i++){
		if(i > ind && a[i] == a[i - 1]) continue;
		if(a[i] > target) break;
		temp.push_back(a[i]);
		combinationSumII(a,i + 1,n,target - a[i],temp,arr);
		temp.pop_back();
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
	int target;	
	cin >> target;
	vector<int> temp;
	vector<vector<int>> arr;
	sort(a.begin(),a.end());
	combinationSumII(a,0,n,target,temp,arr);
	for(int i = 0;i < arr.size();i++){
		for(int j = 0;j < arr[i].size();j++){
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
}