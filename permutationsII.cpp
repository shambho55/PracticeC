#include <bits/stdc++.h>
using namespace std;

#define ll long long

void permuteUnique(vector<int> &a,int ind,int n,set<vector<int>> &arr){
	if(ind == n){
		arr.insert(a);
		return;
	}
	for(int i = ind;i < n;i++){
		if(i < n - 1 && a[i] == a[i + 1]) continue;
		swap(a[i],a[ind]);	
		permuteUnique(a,ind + 1,n,arr);
		swap(a[i],a[ind]);
	}
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
		set<vector<int>> arr;
		permuteUnique(a,0,n,arr);
		vector<vector<int>> ans;
		for(auto it:arr){
			vector<int> temp;
			for(int i = 0;i < it.size();i++){
				temp.push_back(it[i]);
			}
			ans.push_back(temp);
		}
		for(int i = 0;i < ans.size();i++){
			for(int j = 0;j < ans[i].size();j++){
				cout << ans[i][j] << " ";
			}
			cout << "\n";
		}
	}
}