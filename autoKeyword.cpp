#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>

using namespace std;

int main(){
	vector<int> a = {1,2,3,4,5};
	cout << "vector : ";
	for(auto i : a) cout << i << " ";
	cout << endl;

	map<int,int> mp;	
	mp[0] = 1;
	mp[2] = 4;
	mp[3] = 7;
	cout << "map : ";
	for(auto i : mp){
		cout << i.first << "->" << i.second << " ";
	}
	cout << endl;

	set<int> s;
	s.insert(1);
	s.insert(5);
	s.insert(9);

	cout << "set : ";
	for(auto i : s) cout << i << " ";
	cout << endl;
} 