#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	// your code goes here
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int rt;
        cin >> rt;
        vector<int> rat(rt);
        bool flag1 = false,flag2 = false;
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i = 0;i < rt;i++){
            cin >> rat[i];
            mp1[rat[i]]++;
        }
        int rd;
        cin >> rd;
        vector<int> rad(rd);
        for(int i = 0;i < rd;i++){
            cin >> rad[i];
            mp2[rad[i]]++;
        }
        int st;
        cin >> st;
        vector<int> sat(st);
        for(int i = 0;i < st;i++){
        cin >> sat[i];
        if(mp1[sat[i]] == 0) flag1 = true;
        }
        int sd;
        cin >> sd;
        vector<int> sad(sd);
        for(int i = 0;i < sd;i++){
            cin >> sad[i];
            if(mp2[sad[i]] == 0) flag2 = true; 
        } 
        if(flag1 || flag2) cout << "no" << "\n";
        else cout << "yes" << "\n";
    }
	return 0;
}
