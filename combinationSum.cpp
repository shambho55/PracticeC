#include <bits/stdc++.h>
using namespace std;

#define ll long long

void combinationSum(vector<int> &a,int i,int n,int target,vector<int> &temp,vector<vector<int>> &arr){
	if(i >= n){
		if(target == 0){
			arr.push_back(temp);
		}
		return;
	}
	if(a[i] <= target){
		temp.push_back(a[i]);
		combinationSum(a,i,n,target - a[i],temp,arr);
		temp.pop_back();
	}
	combinationSum(a,i + 1,n,target,temp,arr);
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
	int i = 0;
	vector<vector<int>> arr;
	combinationSum(a,i,n,target,temp,arr);
	for(int i = 0;i < arr.size();i++){
		for(int j = 0;j < arr[i].size();j++){
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

}