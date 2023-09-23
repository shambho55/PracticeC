#include <bits/stdc++.h>
using namespace std;

int func(string a){ 
    int bal = 0,max_bal = 0;
    for(int i = 0;i < a.size();i++){
        if(a[i] == '(') bal++;
        if(a[i] == ')') bal--;
        max_bal = max(max_bal,bal);
    }
    return max_bal;
}

int main() {
	// your code goes here
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    string a;
    cin >> a;
    string b = "";
    int ch = func(a);
    for(int i = 0;i < ch;i++){
    b += '(';
    }
    for(int i = ch;i > 0;i--){
    b += ')';
    }
    cout << b << "\n";
    }
	return 0;
}
