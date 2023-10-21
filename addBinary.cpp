#include <bits/stdc++.h>
using namespace std;

#define ll long long

string addBinary(string a, string b) {
        int n_a = a.length(),n_b = b.length(),an = 0,bn =  0;
        for(int i = 0;i < n_a;i++){
            if(a[i] == '1') an += (1 << (n_a - i - 1));
        }
        for(int i = 0;i < n_b;i++){
            if(b[i] == '1') bn += (1 << (n_b - i - 1));
        }
        int cn = an + bn;
        string ans = "";
        for(int i = cn;i > 0;i/=2){
        	ans += to_string(i%2);
        }
        reverse(ans.begin(),ans.end());
        return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a;
		cin >> b;
		string ans = addBinary(a,b);
		cout << ans << "\n";
	}
}