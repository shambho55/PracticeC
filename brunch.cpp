#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
    int x,y;
    cin >> x >> y;
    int ch = (x / y);
    if(ch > 20) cout << 20 << "\n";
    else cout << ch << "\n";
    }
	return 0;
}
