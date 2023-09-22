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
        int s,a,b,c;
        cin >> s >> a >> b >> c;
        double chec = (s * 1.0) + ((s * c * 1.0) / 100.0);
        if(chec >= a && chec <= b) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
	return 0;
}
