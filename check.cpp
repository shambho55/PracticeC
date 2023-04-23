#include <bits/stdc++.h>
using namespace std;
int main(){
	map<int,pair<int,int>> mp;
	mp[0].first = 1;
	mp[0].second = 2;
	mp[1].first = 3;
	mp[1].second = 4;
	mp[2].first = 5;
	mp[2].second = 6;
	mp.erase(2);
	for(int i = 0;i < mp.size();i++) cout << mp[i].first << " " << mp[i].second << endl;
}