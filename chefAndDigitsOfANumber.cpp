#include <iostream>
using namespace std;

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
    int count = 0,count_1 = 0;  
    for(int i = 0;i < a.size();i++){
        if(a[i] == '0') count++;
        else if(a[i] == '1') count_1++;
    }
    if(count == 1 || count_1 == 1) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    }
	return 0;
}
