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
    int p,q;
    cin >> p >> q;
    if((p + q) % 4 < 2) cout << "Alice" << "\n";
    else cout << "Bob" << "\n";
    }
	return 0;
}
