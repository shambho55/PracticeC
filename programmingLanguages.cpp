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
    int a,b,a1,b1,a2,b2;
    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
    if((a == a1 || a == b1) && (b == a1 || b == b1)) cout << 1 << "\n";
    else if((a == a2 || a == b2) && (b == a2 || b == b2)) cout << 2 << "\n";
    else cout << 0 << "\n";
    }
	return 0;
}
