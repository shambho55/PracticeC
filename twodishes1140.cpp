#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    if(b >= n && (a + c) >= n) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    }
	return 0;
}
