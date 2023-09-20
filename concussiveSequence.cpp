#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(vector<int> a){
	int n = a.size();
	for(int i = 1;i < n - 1;i++){
		if(a[i] < a[i - 1] && a[i] < a[i + 1]){
			continue;
		}
		if(a[i] > a[i - 1] && a[i] > a[i + 1]){
			continue;
		}
		return false;
	}
	return true;
}

void solve(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i < n;i++) cin >> arr[i];
	sort(arr.begin(),arr.end());		
	vector<int> a(n),b(n);
	int j = 0;
	for(int i = 0;j < n;i += 2){
		if(i >= n) i = 1;
	a[i] = arr[j++];	
	}
	j = 0;
	for(int i = 1;j < n;i += 2){
		if(i >= n) i = 0;
		b[i] = arr[j++];
	}
	if(check(a)){
		for(int i = 0;i < n;i++){
			cout << a[i] << " ";
		}
		cout << "\n";
	}
	else if(check(b)){
		for(int i = 0;i < n;i++){
			cout << b[i] << " ";
		}
		cout << "\n";
	}
	else cout << -1 << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--) solve();
}