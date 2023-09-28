#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> getSecondOrderElements(vector<int> &a){
	int n = a.size(),secL = 0,l = 0,sm = INT_MAX,ssm = 0;
	for(int i = 0;i < n;i++){
		if(a[i] > l){
			secL = l;
			l = a[i];
		}
		else if(a[i] > secL && a[i] != l){
			secL = a[i];
		}
		if(a[i] < sm){
			ssm = sm;
			sm = a[i];
		}
		else if(a[i] < ssm && a[i] != sm){
			ssm = a[i];
		}
	}
	vector<int> ans(2);
	ans[0] = secL,ans[1] = ssm;
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	vector<int> ans;	
	ans = getSecondOrderElements(a);
	cout << ans[0] << " " << ans[1] << "\n";
}