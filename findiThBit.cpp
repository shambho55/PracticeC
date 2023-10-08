#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int i;
	cin >> i;
	for(int j = i - 1;j >= 0;j--){
	if((n & (1 << j)) != 0) cout << 1;
	else cout << 0 ;
	}
	cout << "\n";
}