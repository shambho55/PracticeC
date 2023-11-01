#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    int n,x,d;
    cin >> n >> x >> d;
    cout << (n / (x * 5)) + d << "\n";
    }
	return 0;
}
