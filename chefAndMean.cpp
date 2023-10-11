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
        int n;
        cin >> n;
        vector<ll> a(n);
        double mean = 0;
        for(int i = 0;i < n;i++){
          cin >> a[i];
          mean += a[i];
        }
        int mini = INT_MAX;
        long double rmean = mean,ans = 0,ch = mean;
        mean = (mean * 1.0) / n;
        for(int i = 0;i < n;i++){
            ch -= a[i];
            if(((ch * 1.0) / (n - 1)) == mean){
                if(a[i] < mini){
                    ans = i + 1;
                    mini = a[i];
                }
            }
            ch = rmean;
        }
        if(ans == 0) cout << "Impossible" << "\n";
        else cout << ans << "\n";
    }
	return 0;
}
