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
        int w1,w2,x1,x2,M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        int diff = w2 - w1;
        int mini = (x1 * M),maxi = (x2 * M);
        if(diff > maxi || diff < mini) cout << 0 << "\n";
        else cout << 1 << "\n";
    }
	return 0;
}
