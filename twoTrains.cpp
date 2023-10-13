#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,sum = 0,maxi = 0;
		cin >> n;
		vector<int> a(n - 1);
		for(int i = 0;i < n - 1;i++){
			cin >> a[i];
			sum += a[i];
			maxi = max(maxi,a[i]);
		}
		cout << sum + maxi << "\n";
	}
}