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
    int x,y,k;
    cin >> x >> y >> k;
    if(abs(y - x) % k == 0) cout << abs(y - x) / k << "\n";
    else cout << abs(y - x) / k + 1 << "\n";
    }
	return 0;
}
