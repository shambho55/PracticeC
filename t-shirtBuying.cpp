#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> price(n);
	vector<int> front(n),back(n);

	for(int i = 0;i < n;i++){
		cin >> price[i];
	}
	for(int i = 0;i < n;i++){
		cin >> front[i];
	}
	for(int i = 0;i < n;i++){
		cin >> back[i];
	}
	int m;
	cin >> m;
	vector<int> buyers;
	for(int i = 0;i < m;i++){
		int ele;
		cin >> ele;
		buyers.push_back(ele);
	}

	map<int,pair<int,int>> mp;
	for(int i = 0;i < n;i++){
		mp[price[i]].first = front[i];
		mp[price[i]].second = back[i];
	}
	vector<int> ans;
	int i = 0;
	for(;i < m;i++){
		vector<int> help;
		for(int j = 0;j < mp.size();j++){
		if(buyers[i] == mp[price[j]].first || buyers[i] == mp[price[j]].second){
			help.push_back(price[j]);
		}
	}
		int min_itr = min_element(help.begin(),help.end()) - help.begin();
		int min_ele = *min_element(help.begin(),help.end());
		cout << min_itr << " " << min_ele << " ";
		mp.erase(min_itr);
		help.clear();
		if(i < n) ans.push_back(min_ele);
		else ans.push_back(-1);
	}
	cout << endl;
	for(int i = 0;i < m;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}