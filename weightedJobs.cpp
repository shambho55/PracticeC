#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
	return a.second < b.second;
}
int main(){
    
    // write your code here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	map<int,int> mp;
	vector<pair<int,int>> a(n);
	for(int i = 0;i < n;i++){
		int first,second,profit;
	cin >> first >> second >> profit;
	a[i].first = first;
	a[i].second = second;
	mp[first] = profit;
    }
    sort(a.begin(),a.end());
	int total = 0,first = 0,last = 0;
	for(int i = 0;i < n;i++){
		first = a[i].first;
		if(first >= last){
			total += mp[first];
			last = a[i].second;
		}
    }
	cout << total << "\n";
    return 0;
}