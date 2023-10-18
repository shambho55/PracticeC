#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
    int n,k,sum = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum < n) cout << "NO" << "\n";
    else if(k == 0 && sum % n != 0) cout << "NO" << "\n";
    else cout << "YES" << "\n";
    }
	return 0;
}
