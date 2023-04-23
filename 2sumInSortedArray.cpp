#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> a,int n,int target){
	int s = 0,e = n - 1;
	pair<int,int> ans;
	while(s < e){
		if(a[s] + a[e] == target){
			ans.first = a[s];
			ans.second = a[e];
			cout << ans.first << " " << ans.second << "\n";
			return;
		}
		else if(a[s] + a[e] < target){
			s += 1;
		}
		else{
			e -= 1;
		}
	}
	cout << "Not exist!" << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,target;
		cin >> n >> target;
		vector<int> a(n);
		for(int i = 0;i < n;i++) cin >> a[i];
		twoSum(a,n,target);
	}
}