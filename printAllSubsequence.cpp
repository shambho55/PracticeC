#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<vector<int>> printSubsequences(vector<int> &a,int it,int n,vector<vector<int>> &arr,vector<int> &temp){
	if(it >= n) {
		arr.push_back(temp);
		return arr;
	}
	temp.push_back(a[it]);
	printSubsequences(a,it + 1,n,arr,temp);
	temp.pop_back();
	printSubsequences(a,it + 1,n,arr,temp);
	return arr;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int it = 0;
	vector<vector<int>> arr;
	vector<int> temp;
	vector<vector<int>> ans = printSubsequences(a,it,n,arr,temp);
	for(int i = 0;i < ans.size();i++){
		for(int j = 0;j < ans[i].size();j++){
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
}