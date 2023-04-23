#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fr(i,a,b) for(int i = a;i < b;i++)	
#define loop(x,n) for(int x = 0;x < n;x++)	
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(),(x).end()
#define el endl
using namespace std;
void precal(){

}

void solve(){
	int n;
	cin >> n;
	vector<ll> a(n);
	loop(i,n) cin >> a[i];
	a.pb(1);
	a.pb(5);
	a.pb(9);
	n += 3;
	cout << "printing using macros : " << endl;
	loop(i,n) cout << a[i] << " ";
	cout << el;
	sort(all(a));
	fr(i,0,n) cout << a[i] << " ";
	cout << el;
}	

int main(){
	fast_io;
	cout << fixed;
	cout << setprecision(10);
	precal();
	int t = 1;
	//cin >> t;
	fr(i,0,t) solve();

}