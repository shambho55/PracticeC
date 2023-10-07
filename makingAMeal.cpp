#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    
    while(n--){
    string s;
    cin >> s;
	
	map<char,int> mp;
    string ch = "codehf";
    for(int i = 0;i < ch.size();i++) mp[ch[i]]++;   
    
    for(int i = 0;i < s.size();i++){
        if(mp.count(s[i])) mp[s[i]]++;
    }
	}
	mp['c'] /= 2;
	mp['e'] /= 2;
    int ans = INT_MAX;
    for(auto m:ch){
        ans = min(ans,mp[m]);
    }
    cout << ans - 1 << "\n";
    }
	return 0;
}
