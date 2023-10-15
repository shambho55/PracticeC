#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	int l;
	cin >> l;
	string s;
	cin >> s;
	int mod = 0;
	for(int i = 0;i < l;i++){
		mod = (mod * 10 + s[i] - '0') % 8;
	}
	if(mod == 0){
		cout << s << "\n";
		return;
	}
	int end = s.back() - '0' + 8 - mod;
	if(end >= 10) end -= 8;
	cout << s.substr(0,l - 1) << end << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}