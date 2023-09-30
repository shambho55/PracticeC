#include <bits/stdc++.h>
using namespace std;

#define ll long long

int openKey(string s,string k){
    int n = s.size(),m = k.size();
    int ans = INT_MAX;
    for(int i = 0;i <= (n - m);i++){
        int sum = 0;
        for(int j = 0;j < m;j++){
            int val = abs((int)s[i + j] - (int)k[j]);
            sum += min(val,10 - val);
        }
        ans = min(sum,ans);
    }
    return ans;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string s,k;
        cin >> s;
        cin >> k;
        int ans = openKey(s,k);
        cout << ans << "\n";
    }
}