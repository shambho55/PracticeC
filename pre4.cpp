#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	int ans = 0,rem = 0,sum = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(int i = 0;i < (n / 2);i++){
		sum = arr[i] + arr[n - i - 1];
		ans = sum / 10;
		rem = sum % 10;
		cout << ans << " " << rem << endl;
	}
}