#include <bits/stdc++.h>
using namespace std;

#define ll long long

int rangeBitwiseAnd(int left, int right){
	int count = 0;
	while(left != right){
		left = left >> 1;
		right = right >> 1;
		count++;
	}
	return left << count;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int l,r;
	cin >> l >> r;
	int ans = rangeBitwiseAnd(l,r);
	cout << ans << "\n";
}