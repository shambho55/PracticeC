// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    int a,b,c;
    cin >> a >> b >> c;
    int count = 1;
    for(int i = 1;i < 100;i++){
        if(a > b){
            if((a - c) <= (b + c)){
                break;
            }
            // else if((a - c) < (b + c)){
            //     // count++;
            //     break;
            // }
            else{
                a -= c;
                b += c;
                count++;
            }
        }
        else if(b > a){
            if((b - c) <= (a + c)){
                break;
            }
            // else if((b - c) < (a + c)){
            //     // count++;
            //     break;
            // }
            else{
                b -= c;
                a += c;
                count++;
            }
        }
        else{
            break;
        }
    }
    if(a == b) cout << 0 << "\n";
    else cout << count << "\n";
    }

    return 0;
}