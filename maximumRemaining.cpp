#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    int ans = 0;
    sort(a.begin(),a.end());
    for(int i = 0;i < n;i++){
        ans = max(ans,a[i] % a[n - 1]);
    }
    cout << ans << "\n";
	return 0;
}
