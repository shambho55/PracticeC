#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int longestValidParentheses(string s){
	int n = s.size();
	stack<int> st;
	st.push(-1);	
	int maxi = 0;
	for(int i = 0;i < n;i++){
		if(s[i] == '('){
			st.push(i);
		}
		else{
			st.pop();
			if(st.empty()) st.push(i);
			else maxi = max(maxi,i - st.top());
		}
	}
	return maxi;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	int ans = longestValidParentheses(s);
	cout << ans << "\n";
}