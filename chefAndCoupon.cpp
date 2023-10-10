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
        int d,c;
        cin >> d >> c;
        int a1,a2,a3,b1,b2,b3;
        cin >> a1 >> a2 >> a3;
        cin >> b1 >> b2 >> b3;
        int sum1 = (a1 + a2 + a3),sum2 = (b1 + b2 + b3),ch1 = sum1,ch2 = sum2;
        if(ch1 >= 150 && ch2 >= 150 && (ch1 + ch2 + c) < (ch1 + ch2 + (2 * d))) cout << "YES" << "\n";
        else if(ch1 < 150 && ch2 >= 150 && (ch1 + ch2 + d + c) < (ch1 + ch2 + (2 * d))) cout << "YES" << "\n";
        else if(ch1 >= 150 && ch2 < 150 && (ch1 + ch2 + d + c) < (ch1 + ch2 + (2 * d))) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}
