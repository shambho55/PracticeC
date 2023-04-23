#include <bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i = 0;i < n;i++) 

bool cmp(pair<int,int> &a,pair<int,int> &b){
	return a.second < b.second;
}

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> a(n);
	f(i,n) cin >> a[i].first >> a[i].second;
	sort(a.begin(),a.end(),cmp);
	int total = 1,last = 0;
	f(i,n){
		if(a[i].first >= a[last].second){
			total++;
			last = i;
		}
	}
	cout << total << "\n";
}