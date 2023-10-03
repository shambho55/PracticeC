#include <bits/stdc++.h>
using namespace std;

#define ll long long 

vector<int> sortedArray(vector<int> &a,vector<int> &b){
	int n = a.size(),m = b.size();
	//Brute Force Approach
	// set<int> s;
	// for(int i = 0,j = 0;i < n || j < m;i++,j++){
	// 	if(i < n) s.insert(a[i]);
	// 	if(j < m) s.insert(b[j]);
	// }
	// vector<int> ans;
	// for(auto it:s){
	// 	ans.push_back(it);
	// }
	// return ans;

	//Optimal Approach
	int i = 0,j = 0;
	vector<int> ans;
	while(i < n && j < m){
		if(a[i] <= b[j]){
			if(ans.size() == 0) ans.push_back(a[i++]);
			else if(ans[ans.size() - 1] == a[i]) i++;
			else ans.push_back(a[i++]);
		}
		else if(b[j] < a[i]){
			if(ans.size() == 0) ans.push_back(b[j++]);
			else if(ans[ans.size() - 1] == b[j]) j++;
			else ans.push_back(b[j++]);
		}
	}
	while(i < n){
		if(ans[ans.size() - 1] != a[i]) ans.push_back(a[i]);
		i++;
	}
	while(j < m){
		if(ans[ans.size() - 1] != b[j]) ans.push_back(b[j]);
		j++;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int> a(n),b(m);
	for(int i = 0;i < n;i++) cin >> a[i];
	for(int j = 0;j < m;j++) cin >> b[j];
	vector<int> ans = sortedArray(a,b);
	for(int i = 0;i < ans.size();i++) cout << ans[i] << " ";
	cout << "\n";
}