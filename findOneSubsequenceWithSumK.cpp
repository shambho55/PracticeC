#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool findSequenceWithSumK(vector<int> &a,int i,int n,int k,vector<int> &temp,int j){
	if(i >= n){
		if(j == k) return true;
		else return false;
	}
	temp.push_back(a[i]);
	j += a[i];
	if(findSequenceWithSumK(a,i + 1,n,k,temp,j)) return true;
	j -= a[i];
	temp.pop_back();
	if(findSequenceWithSumK(a,i + 1,n,k,temp,j)) return true;
	return false;
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
	vector<int> temp;
	bool ans = findSequenceWithSumK(a,i,n,k,temp,j);
	cout << ans << "\n";
}