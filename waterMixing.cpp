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
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    if(a <= b && (a + x) >= b) cout << "Yes" << "\n";
    else if(a >= b && (a - y) <= b) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    }
	return 0;
}
