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
        int w;
        string s;
        cin >> w >> s;
        int ch = 0;
        if(s == "tues") ch = 1;
        else if(s == "wed") ch = 2;
        else if(s == "thurs") ch = 3;
        else if(s == "fri") ch = 4;
        else if(s == "sat") ch = 5;
        else if(s == "sun") ch = 6;
        if(w % 7 == 1){
            for(int i = 0;i < 7;i++){
                if(i == ch) cout << 5 << " ";
                else cout << 4 << " ";
            }
            cout << "\n";
        }
        else if(w % 7 == 2){
            if(ch == 6){
                for(int i = 0;i < 7;i++){
                    if(i == 0 || i == ch) cout << 5 << " ";
                    else cout << 4 << " ";
                }
                cout << "\n";
            }
            else{
                for(int i = 0;i < 7;i++){
                    if(i == ch || i == (ch + 1)) cout << 5 << " ";
                    else cout << 4 << " ";
                }       
                cout << "\n";
            }
        }
        else if(w % 7 == 3){
            if(ch == 5){
                for(int i = 0;i < 7;i++){
                    if(i == 0 || i == (ch) || i == (ch + 1)) cout << 5 << " ";
                    else cout << 4 << " ";
                }
                cout << "\n";
            }
            else if(ch == 6){
                for(int i = 0;i < 7;i++){
                    if(i == 0 || i == 1 || i == ch) cout << 5 << " ";
                    else cout << 4 << " ";
                }
                cout << "\n";
            }
            else{
                for(int i = 0;i < 7;i++){
                    if(i == ch || i == (ch + 1) || i == (ch + 2)) cout << 5 << " ";
                    else cout << 4 << " ";
                }
                cout << "\n";
            }
        }
        else{
            for(int i = 0;i < 7;i++){
                cout << 4 << " ";
            }
            cout << "\n";
        }
    }
	return 0;
}
