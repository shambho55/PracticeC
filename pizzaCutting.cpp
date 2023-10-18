#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    if(n == 1 || n % 2 == 0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    }
	return 0;
}
