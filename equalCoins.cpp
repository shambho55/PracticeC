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
    int x,y;
    cin >> x >> y;
    if(x == 0 && y % 2 != 0) cout << "NO" << "\n";
    else if((x + (2  * y)) % 2 == 0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    }
	return 0;
}
