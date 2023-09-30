#include <bits/stdc++.h>
using namespace std;

#define ll long long 

vector<int> intersect(vector<int> &a,vector<int> &b){
	int n = a.size(),m = b.size();
	//Brute Force Approach
	// sort(a.begin(),a.end()),sort(b.begin(), b.end());
	// vector<int> vis(m),ans;
	// for(int i = 0;i < n;i++){
	// 	for(int j = 0;j < m;j++){
	// 		if(a[i] == b[j] && vis[j] == 0){
	// 			ans.push_back(a[i]);	
	// 			vis[j] = 1;
	// 			break;
	// 		}
	// 		else if(b[j] > a[i]) break;
	// 	}
	// }
	// return ans;

	//Optimal Approach
	sort(a.begin(), a.end()),sort(b.begin(), b.end());
	int i = 0,j = 0;
	vector<int> ans;
	while(i < n && j < m){
		if(a[i] == b[j]){
			ans.push_back(a[i]);
			i++;
			j++;
		}
		else if(a[i] < b[j]){	
			i++;
		}
		else j++;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n1,n2;
	cin >> n1 >> n2;
	vector<int> a1(n1),a2(n2);
	for(int i = 0;i < n1;i++) cin >> a1[i];
	for(int j = 0;j < n2;j++) cin >> a2[j];
	vector<int> ans = intersect(a1,a2);	
	for(int i = 0;i < ans.size();i++) cout << ans[i] << " ";
	cout << "\n";
}