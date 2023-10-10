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
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int l = s.length(),ans = 0;
    for(int i = 0;i < l;i++){
        ans += ((i + 1) * (s[i] - 'a' + 1));
    }
    cout << ans << "\n";
    }
	return 0;
}
