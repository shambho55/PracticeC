#include <bits/stdc++.h>
using namespace std;

#define ll long long

int countSequenceWithSumK(vector<int> &a,int i,int n,int k,int j){
	// Below line only works if there are positive elements
	//if(j > k) return 0;
	if(i >= n){
		if(j == k) return 1;
		else return 0;
	}
	j += a[i];
	int l = countSequenceWithSumK(a,i + 1,n,k,j);
	j -= a[i];
	int r = countSequenceWithSumK(a,i + 1,n,k,j);
	return l + r;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int k,i = 0,j = 0;	
	cin >> k;
	int ans = countSequenceWithSumK(a,i,n,k,j);
	cout << ans << "\n";
}