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
    ll n,k,s,ans = 0;
    cin >> n >> k >> s;
    for(int i = 0,j = 1;i < n;i++,j+=2){
        ans += j;
    }
    cout << (s - ans) / (k - 1) << "\n"; 
    }
	return 0;
}
