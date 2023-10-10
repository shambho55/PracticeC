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
    int a,b,c,p,q,r;
    cin >> a >> b >> c >> p >> q >> r;
    double sum = ((p + q + r) * 1.0) / 2;
    if(p + b + c > sum || a + q + c > sum || a + b + c > sum || a + b + r > sum) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    }
    return 0;
}
