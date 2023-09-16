#include <bits/stdc++.h>
using namespace std;

#define ll long long

int maxScore(string s){
	int count = 0,preSum = 0;
	int n = s.size();	
	for(int i = 0;i < n;i++) {
		if(s[i] == '1') preSum++;
	}
	int ans = 0;
	for(int i = 0;i < n - 1;i++){
		if(s[i] == '0'){
			count++;
		}
		else preSum--;
		ans = max(ans,count + preSum);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	int ans = maxScore(s);
	cout << ans << "\n";
}