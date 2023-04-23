#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> &a,pair<ll,ll> &b){
	double f = (double)a.first / a.second;
	double s = (double)b.first / b.second;
	return f > s;
}
int main(){
	int n,capacity;
	cin >> n >> capacity;
	vector<pair<ll,ll>> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(),a.end(),cmp);
	for(int i = 0;i < n;i++){
		cout << "value : " << a[i].first << " " << "weight : " << a[i].second << "\n";
	}
	ll total_weight = 0;
	double profit = 0;
	for(int i = 0;i < n;i++){
		if(total_weight + a[i].second < capacity){
			total_weight += a[i].second;
			profit += (double)a[i].first;
		}
		else{
			ll remain = capacity - total_weight; 
			profit += (double)(remain) * ((double)a[i].first / a[i].second);
			break;
		}
	}
	cout << profit << "\n";
	return 0; 
}