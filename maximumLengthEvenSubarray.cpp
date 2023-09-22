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
        ll n;
        cin >> n;
        // map<ll,ll> mp;
        // ll sum = 0;
        // for(ll i = 1;i <= n;i++){
        //     sum += i;
        //     mp[i] = sum;
        // }
        // for(ll i = n;i >= 2;i--){
        //     if(mp[i] % 2 == 0){
        //         cout << i << "\n";
        //         break;
        //     }
        // }
        // for(int i = n;i >= 2;i--){
        //     if(i % 4 == 0 || (i + 1) % 4 == 0){
        //         cout << i << "\n";
        //         break;
        //     }
        // }
        // if(n <= 2) cout << n - 1 << "\n";
        // if(n <= 2 && n > 0) cout << n - 1 << "\n";
        if(n == 0) cout << 0 << "\n";
        else{
            int sum = (n * (n + 1)) / 2,sum_1 = ((n - 1) * n) / 2;
            if(sum % 2 == 0) cout << n << "\n";
            else cout << (n - 1) << "\n";
        }
    }
	return 0;
}
