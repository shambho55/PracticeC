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
    int n;
    cin >> n;
    int arr[n],count = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        if(arr[i] == 1) count++;
    }
    if(count >= (n / 2)) count = count - (n / 2);
    else count = (n / 2) - count;
    if(n % 2 != 0) cout << -1 << "\n";
    else cout << count << "\n";
    }
	return 0;
}
