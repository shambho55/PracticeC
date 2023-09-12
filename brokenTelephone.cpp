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
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0;i < n;i++) cin >> a[i];
		int si = 0;	
		if(a[0] != a[1]) si++;
		for(int i = 1;i < n - 1;i++){
			if(a[i] != a[i - 1] || a[i] != a[i + 1]){
				si++;
			}
		}
		if(a[n - 1] != a[n - 2]) si++;	
		cout << si << "\n";
	}
}