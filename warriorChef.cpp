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
    int n,h;
    cin >> n >> h;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0;i < n;i++){
      cin >> a[i];
      sum += a[i];
    } 
    int countSum = sum;
    sort(a.begin(),a.end());
    int ans = 0;
    for(int i = n - 1;i >= 0;i--){
        h -= a[i];
        if(h <= 0){
            ans = a[i];
            break;
        }
    }
    // if(h > countSum) cout << 0 << "\n";
    cout << ans << "\n";
    }
    return 0;
}
