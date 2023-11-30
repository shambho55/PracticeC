#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while(t--){
    int x,n;
    cin >> x >> n;
    int divi = ceil((n * 1.0) / 100);
    int ans = divi - x;
    if(ans < 0) cout << 0 << "\n";
    else cout << ans << "\n";
    }
	return 0;
}
