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
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    int sum = 0;
    for(int i = 1;i < n;i++) sum += a[i];
    cout << sum << "\n";
    }
	return 0;
}