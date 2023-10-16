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
    int l;
    cin >> l;
    string s,t,u,ans;
    cin >> s;
    cin >> t;
    cin >> u;
    int diff = t[0] - s[0],ch = diff;
    cout << diff << "\n";
    for(int i = 0;i < l;i++){
        if(diff < 0) diff += 26;
        if(u[i] - 'a' + diff >= 26) diff -= 26;
        ans += (u[i] + diff);
        diff = ch;
    }
    cout << ans << "\n";
    }
	return 0;
}
