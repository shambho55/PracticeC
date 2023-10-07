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
    int n,u,d;
    cin >> n >> u >> d;
    vector<int> arr(n);
    for(int i = 0;i < n;i++) cin >> arr[i];
    bool flag = false;
    int count = 0;
    for(int i = 0;i < n - 1;i++){
        if(arr[i + 1] - arr[i] == 0) count = i + 1;
        else if(arr[i + 1] - arr[i] > 0 && arr[i + 1] - arr[i] <= u) count = i + 1;
        else if(arr[i + 1] - arr[i] < 0 && arr[i] - arr[i + 1] <= d) count = i + 1;
        else if(arr[i + 1] - arr[i] < 0 && arr[i] - arr[i + 1] > d && !flag){
            count = i + 1;
            flag = true;
        }
        else break;
    }
    cout << count + 1 << "\n";
    }
	return 0;
}
