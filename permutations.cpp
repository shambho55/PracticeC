#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Approach 1

// void permutations(vector<int> &a,int n,vector<bool> &ch,vector<int> &temp,vector<vector<int>> &arr){	
// 	if(temp.size() == n){
// 		arr.push_back(temp);
// 		return;
// 	}
// 	for(int i = 0;i < n;i++){
// 		if(!ch[i]){
// 		temp.push_back(a[i]);
// 		ch[i] = 1;
// 		permutations(a,n,ch,temp,arr);
// 		temp.pop_back();
// 		ch[i] = 0;
// 	}
// 	}
// }


// Approach 2

void permutations(vector<int> &a,int ind,int n,vector<vector<int>> &arr){
	if(ind == n){
		arr.push_back(a);
		return;
	}
	for(int i = ind;i < n;i++){
		swap(a[ind],a[i]);
		permutations(a,ind + 1,n,arr);
		swap(a[ind],a[i]);
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
		vector<vector<int>> arr;
		vector<int> temp;
		vector<bool> ch(n,0);
		// permutations(a,n,ch,temp,arr);
		permutations(a,0,n,arr);
		for(int i = 0;i < arr.size();i++){
			for(int j = 0;j < arr[i].size();j++){
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
	}
}