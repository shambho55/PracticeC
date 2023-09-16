#include <bits/stdc++.h>
using namespace std;

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
    vector<string> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    int ans = 0;
    for(int i = 1;i < n;i++){
        string hp = "";
        int count = 0;
        for(int j = 0;j < 10;j++){
            if(a[0][j] != a[i][j]) count++;
            int a1 = (int(a[0][j] - '0') ^ int(a[i][j] - '0')); 
            string c = to_string(a1);
            hp += c;
        }
        a[0] = hp;
        cout << "values : "; 
        cout << a[0] << " ";
        // ans = max(ans,count);
    }
    cout << "\n";
    for(int i = 0;i < 10;i++){
        if(a[0][i] == '1') ans++;
    }
    cout << ans << "\n";
    }
	return 0;
}
