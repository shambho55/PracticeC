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
        int a,b,c,d,K;
        cin >> a >> b >> c >> d >> K;
        int ch = abs(d - b) + abs(c - a);
        if((ch) == K || (K > ch && (K - ch) % 2 == 0)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
	return 0;
}
