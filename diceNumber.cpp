#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    vector<int> a(3),b(3);
    for(int i = 0;i < 3;i++) cin >> a[i];
    for(int i = 0;i < 3;i++) cin >> b[i];
    sort(a.begin(),a.end()),sort(b.begin(),b.end()); 
  int sum1 = (a[2] * 100 + a[1] * 10 + a[0]),sum2 = (b[2] * 100 + b[1] * 10 + b[0]);    if(sum1 > sum2) cout << "Alice" << "\n";
    else if(sum2 > sum1) cout << "Bob" << "\n";
    else cout << "Tie" << "\n";
    }
	return 0;
}
