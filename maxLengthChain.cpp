#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<int,int>> p;
	p.push_back({2,3});
	p.push_back({1,2});
	p.push_back({5,4});
	p.push_back({3,4});
	p.push_back({6,7});
	p.push_back({4,6});
	sort(p.begin(),p.end());
	for(int i = 0;i < p.size();i++) cout << p[i].first << " " << p[i].second << endl;
}