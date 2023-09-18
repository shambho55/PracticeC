#include <bits/stdc++.h>
using namespace std;

#define ll long long

string leftShift(string s){
    int n = s.size();
    if(n > 0){
    char last = s[n - 1];
    for(int i = n - 2;i >= 0;i--){
        char temp = s[i];
        s[i] = last;
        last = temp;
    }
    s[n - 1] = last;
    }
    return s;
}

string rightShift(string s){
    int n = s.size();
    if(n > 0){
        char first = s[0];
        for(int i = 1;i < n;i++){
            char temp = s[i];
            s[i] = first;
            first = temp;
        }
        s[0] = first;
    }
    return s;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string left = leftShift(s),right = rightShift(s);
        if(left == right) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
	return 0;
}
