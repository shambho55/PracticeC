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
    int n,s;
    cin >> n >> s;
    vector<int> s1,s2;
    vector<int> a(n),b(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < n;i++){
        cin >> b[i];
        if(b[i] == 0) s1.push_back(a[i]);
        else s2.push_back(a[i]);
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int n_s1 = s1.size(),n_s2 = s2.size();
    int rem = 100 - s;
    bool flag = false;
    for(int i = 0,j = 0;i < n_s1 && j < n_s2;i++,j++){
        if(s1[i] + s2[j] <= rem){
            flag = true;
            break;
        }
    }
    if(flag) cout << "yes" << "\n";
    else cout << "no" << "\n";
    }
	return 0;
}
