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
    int a,b;
    cin >> a >> b;
    int t1 = a,t2 = b;
    if(a % b == 0) cout << 0 << "\n";
    else{
        if(a > b){
            int count1 = 0,count2 = 0;
            while(a % b != 0 && a > 0){
                a--;
                b++;
                count1++;
            }
            a = t1,b = t2;
            while(a % b != 0 && b > 0){
                a++;
                b--;
                count2++;
            }
            cout << min(count1,count2) << "\n";
            
        }
        else{
            int ans = 0;
            while(a % b != 0 && b > 0){
                a++;
                b--;
                ans++;
            }
            cout << ans << "\n";
        }
    }
    }
	return 0;
}
