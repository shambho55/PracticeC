#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int minNumberOfFrogs(string s){
	int c = 0,r = 0,o = 0,a = 0,k = 0;
	int n = s.size();
	int inUse = 0,ans = 0;
	for(int i = 0;i < n;i++){
		char ch = s[i];
		if(ch == 'c'){
			c++;
			inUse++;
		}
		else if(ch == 'r'){
			r++;
		}
		else if(ch == 'o'){
			o++;
		}
		else if(ch == 'a'){
			a++;
		}
		else if(ch == 'k'){
			k++;
			inUse--;
		}
		ans = max(ans,inUse);
		if(c < r || r < o || o < a || a < k){
			return -1;
		}
	}
	if(inUse == 0 && c == r && r == o && o == a && a == k){
		return ans;
	}
	return -1;
}

int main(){
	string croakOfFrogs;
	cin >> croakOfFrogs;
	int r = minNumberOfFrogs(croakOfFrogs);
	cout << r << "\n";
}