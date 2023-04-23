#include <bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i = 0;i < n;i++)

void solve(){
	//taking inputs
	int n,m,k;
	cin >> n >> m >> k;
	string s;
	cin >> s;
	vector<char> a(m);
	f(i,m) cin >> a[i];
	// Building a flag vector to fast check which possible character we have to replace
	vector<int> flag(26);
	f(i,m) flag[a[i] - 'a'] = 1;
	// Initializing the frequency matrix and setting it to 0
	int freq[k][26];
	f(i,k){
	f(j,26){
			freq[i][j] = 0;
		}
	}
	// Updating the frequency in freq matrix
	f(i,n){
		freq[i % k][s[i] - 'a']++;
	}
	int total = 0;
	f(i,k){
		int maxi = 0;
		int sum = 0;
		f(j,26){
			sum += freq[i][j];
			if(freq[i][j] > maxi && flag[j] == 1){
				maxi = freq[i][j];
			}
		}
		total += (sum - maxi);
	}
	cout << total << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout << fixed;
	cout << setprecision(10);

	int t;
	cin >> t;
	while(t--){
	solve();
	}
}