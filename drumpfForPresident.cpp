#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<int> a(n);
		for(int i = 0;i < n;i++) cin >> a[i];
		map<int,int> mp;
		for(int i = 0;i < n;i++){
			if(a[i] != (i + 1)){
				if(mp[a[i]] != -1) mp[a[i]]++;
			}
			else{
				mp[a[i]] = -1;
			}
		}
		int count = 0;
		for(auto m:mp){
			if(m.second >= k) count++;
		}
		cout << count << "\n";
	}
}