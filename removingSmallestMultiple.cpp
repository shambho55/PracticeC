#include <bits/stdc++.h>
using namespace std;

int costOpertion(string s,int length){
	set<int> ansSet;
	set<int> t;
	set<int> help;
	for(int i = 1;i <= length;i++){
		ansSet.insert(i);
		if(s[i - 1] == '1'){
			t.insert(i);
		}
		else if(s[i - 1] == '0'){ 
			help.insert(i);
		}
	}
	int ans = 0;
	for(auto i : help){
	
	}
	return ans;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ans = costOpertion(s,n);
		cout << ans << endl;
	}
}