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
    int n,k,v;
    cin >> n >> k >> v;
    int sum = 0;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
    cin >> a[i];
    sum += a[i];
    }
    int ch = (v * (n + k)) - sum;
    if(ch > 0 && (ch % k) == 0) cout << ch / k << "\n";
    else cout << -1 << "\n";
    }
	return 0;
}
