#include <iostream>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    int p;
    cin >> p;
    int ans = (p % 100) + (p / 100);
    if(ans <= 10) cout << ans << "\n";
    else cout << -1 << "\n";
    }
	return 0;
}
