#include <bits/stdc++.h>
using namespace std;

#define ll long long

void subsets(vector<int> &a,int i,int n,vector<int> &temp,vector<vector<int>> &arr){
	arr.push_back(temp);
	for(int ind = i;ind < n;ind++){
		temp.push_back(a[ind]);
		subsets(a,ind + 1,n,temp,arr);
		temp.pop_back();
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
		vector<int> temp;
		vector<vector<int>> arr;
		subsets(a,0,n,temp,arr);
		for(int i = 0;i < arr.size();i++){
			for(int j = 0;j < arr[i].size();j++){
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
	}
}