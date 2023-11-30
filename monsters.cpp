#include <bits/stdc++.h>
using namespace std;


void prime(vector<int> &arr){
    for(int i = 0;i < 1e6 + 1;i++){
        bool flag = false;
        for(int j = 2;(j * j) <= i;j++){
            if(i % j == 0){
                flag = true;
                break;
            }
        }
        if(!flag) arr[i] = 1;
    }
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >>t;
    vector<int> arr(1e6 + 1,0);
    prime(arr);
    while(t--){
    int h;
    cin >> h;
    int ans = 0,it = 1,temp = h;
    while(temp > 0){
        if(arr[temp] == 1){
            temp -= temp;
            if(temp == 0) {
                ans++;
                break;
            }
            else if(temp < 0){
                ans = -1;
                break;
            }
        }
        else{
            temp -= it;
            if(temp < 0) {
                ans = -1;
                break;
            }
            ans++;
        }
        it *= 2;
    }
    if(ans == 0) cout << -1 << "\n";
    else cout << ans << "\n";
    }
	return 0;
}
