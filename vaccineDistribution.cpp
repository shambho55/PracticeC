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
        int n,d,count = 0;
        cin >> n >> d;
        vector<int> a(n);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
            if(a[i] <= 9 || a[i] >= 80) count++;
        }
        int ans = ceil((count * 1.0)/ d) + ceil(((n - count) * 1.0) / d);
        cout << ans << "\n";
        }
	return 0;
}
