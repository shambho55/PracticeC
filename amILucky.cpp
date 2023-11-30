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
    int n,x,k;
    cin >> n >> x >> k;
    int diff = n - x;
    int rem_b = x % k,rem_g = diff % k;
    cout << abs(rem_b - rem_g) << "\n";
    }
	return 0;
}
