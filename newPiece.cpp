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
    int a,b,p,q;
    cin >> a >> b >> p >> q;
    if(a == p && b == q) cout << 0 << "\n";
    else if(((a + b) % 2 == 0 && (p + q) % 2 != 0) || ((a + b) % 2 != 0 && (p + q) % 2 == 0)){
            cout << 1 << "\n";
    }
    else cout << 2 << "\n";
    }
	return 0;
}
