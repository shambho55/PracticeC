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
        ll u,v,a,s;
        cin >> u >> v >> a >> s;
        if(u == v) cout << "Yes" << "\n";
        else{
            ll left = (v * v);
            ll right = (u * u) - (2 * a * s);
            if(left >= right) cout << "Yes" << "\n";
            else cout << "No" << "\n";
        }
    }
	return 0;
}
