#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a,int b){
	if(b == 1) return a;
	return gcd(b,a % b);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		int a = 1,b = 1;
		int as = 0,an = 0;
		for(;(a + b) <= r;a++){
			for(;(a + b) <= r;b++){
				if((a + b) >= l){
				if(gcd(a,b) != 1){
					as = a;
					an = b;
					break;
				}
				}
			}
		}
		if(as != 0 && an != 0)cout << as << " " << an << "\n";	
		else cout << -1 << "\n";
	}
}