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
		int n;
		cin >> n;
		vector<int> a(n),b(n);
		map<int,int> mp;
		for(int i = 0;i < n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 0;i < n;i++){
			cin >> b[i];
			mp[b[i]]++;
		}
		int ans = 1;
		for(auto m:mp){
			ans = max(ans,m.second);
		}
		cout << ans << "\n";
	}
}