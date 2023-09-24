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
        ll n,k;
        cin >> n >> k;
        ll temp = n,prev = 0;
        if(k == 0) cout << n << "\n";
        else{
            cout << (n - (k * (n / k))) << "\n";
        }
    }
	return 0;
}
