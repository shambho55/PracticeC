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
        vector<string> arr(n);
        int a = 0,b = 0,o = 0,ab = 0;
        for(int i = 0;i < n;i++){
            cin >> arr[i];
            if(arr[i] == "A") a++;
            else if(arr[i] == "B") b++;
            else if(arr[i] == "AB") ab++;
            else o++;
        }
        int counta = a + ab,countb = b + ab, maxi = 0;  
        maxi = max(counta,countb);
        if(o > 0) cout << (o + maxi) << "\n";
        else cout << maxi << "\n";
    }
	return 0;
}
