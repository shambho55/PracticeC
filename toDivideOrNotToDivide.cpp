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
    ll a,b,n;
    cin >> a >> b >> n;
    ll ans = (n / a) + (n % a != 0);
    ans *= a;
    if(ans % b == 0) ans += a;  
    if(ans % b == 0) ans = -1;
    cout << ans << "\n";
    }
	return 0;
}
