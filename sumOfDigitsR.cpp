#include <bits/stdc++.h>
using namespace std;
class code{
public:
	int getSum(int n){
		int sum ;
		for(sum = 0;n > 0,sum += (n % 10);n /= 10);
		return sum;
	}
	int getSumR(int n){
		if(n == 0) return 0;
		return (n % 10) + getSumR(n / 10);
	}
};
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	code sum;
	// while(n > 0){
	// 	sum += (n % 10); 
	// 	n = n / 10;
	// }
	// cout << sum << "\n";
	cout << sum.getSumR(n) << "\n";
}