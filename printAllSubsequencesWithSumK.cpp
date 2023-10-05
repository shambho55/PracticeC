#include <bits/stdc++.h>
using namespace std;

#define ll long long 

vector<vector<int>> printSubsequencesWithSumK(vector<int> &a,int i,int n,vector<vector<int>> &arr,vector<int> &temp,int j,int k){
	if(i >= n){
		if(j == k) arr.push_back(temp);
		return arr;
	}
	
	printSubsequencesWithSumK(a,i + 1,n,arr,temp,j,k);
	temp.push_back(a[i]);
	j += a[i];
	
	printSubsequencesWithSumK(a,i + 1,n,arr,temp,j,k);
	temp.pop_back();
	j -= a[i];
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
	int k,i = 0,j = 0;	
	cin >> k;
	vector<vector<int>> arr;
	vector<int> temp;
	vector<vector<int>> ans = printSubsequencesWithSumK(a,i,n,arr,temp,j,k);
	for(int i = 0;i < ans.size();i++){
		for(int j = 0;j < ans[i].size();j++){
			cout << ans[i][j] << " ";
		}
		cout << '\n';
	}
}