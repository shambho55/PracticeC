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
        string s;
        cin >> s;
        int l = s.size();
        map<string,int> mp;
        for(int i = 0;i < l - 1;i++){
            mp[s.substr(i,2)]++;
        }
        cout << mp.size() << "\n";
    }
	return 0;
}
