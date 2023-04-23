#include <bits/stdc++.h>
using namespace std;

int main(){
	string st;
	cin >> st;
	int sum = 0;
	for(int i = 0;i < st.length();i++){
		sum += st[i] - '0';
	}
	cout << sum << "\n";
}