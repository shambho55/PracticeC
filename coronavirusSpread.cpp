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
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];   
    vector<int> ans;    
    int count = 1;
    for(int i = 0;i < n - 1;i++){
        if(a[i + 1] - a[i] <= 2) count++;
        if(a[i + 1] - a[i] > 2){
            ans.push_back(count);
            count = 1;
        }
    }
   	ans.push_back(count);
    int m = ans.size() - 1;
    sort(ans.begin(),ans.end());
    cout << ans[0] << " " << ans[m] << "\n";
    }
	return 0;
}
