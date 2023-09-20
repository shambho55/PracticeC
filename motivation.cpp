#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
    ll n,x;
    cin >> n >> x;
    ll ans = 0;
    vector<pair<ll,ll>> p(n);
    for(ll i = 0;i < n;i++){
        cin >> p[i].first >> p[i].second;
        if(p[i].first <= x) ans = max(ans,p[i].second);
    }
    cout << ans << "\n";
    }
	return 0;
}
