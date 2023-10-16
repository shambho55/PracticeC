#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a;
    cin >> a;
    if(a % 3 == 0) cout << "yes" << "\n";
    else if(a % 2 != 0){
        if((a - 1) % 3 == 0) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    else cout << "no" << "\n";
	return 0;
}
