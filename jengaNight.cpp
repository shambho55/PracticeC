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
    int n,x;
    cin >> n >> x;
    if(n <= x && x % n == 0) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    }
	return 0;
}
