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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int it = 0;
        while(s[it] != '1'){
            it++;
        }
        for(int i = n - 3;i >= it;i--){
            s[i] = '1';
            s[i + 1] = '0';
            s[i + 2] = '0';
        }
        cout << s << "\n";
    }
	return 0;
}
