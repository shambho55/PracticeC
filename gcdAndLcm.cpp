#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a,ll b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int main() {
	// your code goes here
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
    ll x,y,k;
    cin >> x >> y >> k;
    if(x != y){
    for(int i = 1;i <= k;i++){
        if(x > y) x = gcd(x,y);
        else y = gcd(x,y);
        int lcm = ((x / gcd(x,y)) * y);
        if(x > y) x = lcm;
        else y = lcm;
        if(x == y) break;
    }
    }
    cout << x + y << "\n";
    }
	return 0;
}
