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
        int l,r;
        cin >> l >> r;
        if(l == r) cout << 1 << "\n";   
        else if(l < r) cout << ((r - l) * 2) + 1 << "\n";
        else cout << 0 << "\n";
    }
	return 0;
}
