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
    int n,x,k;
    cin >> n >> x >> k;
    vector<int> a(n),b(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < n;i++) cin >> b[i];
    for(int i = 0;i < n;i++){
        if(abs(a[i] - b[i]) <= k) x--;
    }
    if(x <= 0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    }
	return 0;
}
