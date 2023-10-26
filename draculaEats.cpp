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
    int n;
    cin >> n;
    if(n % 7 > 1) cout << (n / 7) + 1 << "\n";
    else cout << n / 7 << "\n";
    }
	return 0;
}
