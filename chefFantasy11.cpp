#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int fact(int n){
    int ans = 1;
    for(int i = 1;i <= n;i++) ans *= i;
    return ans;
}

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
        cout << (fact(n) / (fact(n - 2) * fact(2))) * 2 << "\n";
    }
	return 0;
}
