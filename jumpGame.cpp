#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool canJump(vector<int> &a){
	int i = 0,maxReach = 0;
	int n = a.size();
	while(i < n && i <= maxReach){
		maxReach = max(maxReach,i + a[i]);
		i++;
	}
	if(i == n) return true;
	else return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	bool ans = canJump(a);	
	cout << ans << "\n";
}