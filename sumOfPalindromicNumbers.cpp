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
    int l,r,ans = 0;
    cin >> l >> r;
    for(int i = l;i <= r;i++){
        string s = to_string(i);
        int sum = 0,n = s.size();
        bool ch = false;
        for(int i = 0,j = n - 1;i <= j;i++,j--){
            if(s[i] != s[j]){
                ch = true;
                break;
            }
        }
        if(!ch){
        for(int i = s.size() - 1;i >= 0;i--){
            sum = (sum * 10) + int(s[i] - '0');
        }
        ans += sum;
        }
    }
    cout << ans << "\n";
    }
	return 0;
}
