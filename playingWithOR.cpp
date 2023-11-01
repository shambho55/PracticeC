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
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        int ans = 0;
        for(int i = 0;i <= n - k;i++){
            int ch = 0;
            for(int j = i;j < (i + k);j++){
                if(j < n) ch = ch | a[j];
            }
            cout << ch << "\n";
            if(ch % 2 != 0) ans++;
        }
        cout << "\n";
        // cout << ans << "\n";
    }
	return 0;
}
