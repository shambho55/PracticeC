#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int longestCommonSubsequence(string a,string b){
	// Approach 1
	// int n1 = a.size(),n2 = b.size();
	// int dp[n1 + 1][n2 + 1];
	// for(int i = 0;i <= n1;i++){
	// 	for(int j = 0;j <= n2;j++){
	// 		dp[i][j] = 0;
	// 	}
	// }
	// for(int i = 1;i <= n1;i++){
	// 	for(int j = 1;j <= n2;j++){
	// 		if(a[i - 1] == b[j - 1]){
	// 			dp[i][j] = dp[i - 1][j - 1] + 1;
	// 		}
	// 		else{
	// 			dp[i][j] = max(dp[i - 1][j - 1],max(dp[i][j - 1],dp[i - 1][j]));
	// 		}
	// 	}
	// }
	// return dp[n1][n2];

	// Approach 2
	int m = a.size();
	int n = b.size();
	int dp[n + 1];
	for(int i = 0;i <= n;i++){
		dp[i] = 0;
	}
	for(int i = 1;i <= m;i++){
		int ans = 0;
		int prev = ans;
		for(int j = 1;j <= n;j++){
			if(a[i - 1] == b[j - 1]){
				ans = dp[j - 1] + 1;
			}
			else{
				ans = max(dp[j],prev);
			}
			dp[j - 1] = prev;
			prev = ans;
		}
		dp[n] = ans;
	}
	return dp[n];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a,b;
	cin >> a;
	cin >> b;
	int ans = longestCommonSubsequence(a,b);
	cout << ans << "\n";
}