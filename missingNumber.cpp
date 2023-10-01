#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int missingNumber(vector<int> &a){
	
	//Brute Force Approach
	// int n = a.size();
	// bool flag = false;
	// int output = 0;
	// for(int i = 1;i <= n;i++){
	// 	flag = 0;
	// 	for(int j = 0;j < n;j++){
	// 		if(a[j] == i){
	// 			flag = 1;
	// 			break;
	// 		}
	// 	}
	// 	if(!flag) output = i;
	// }
	// return output;

	// Better Approach
	// int n = a.size(),ans = 0;
	// vector<int> hash(n + 1,0);
	// for(int i = 1;i <= n;i++){
	// 	hash[a[i - 1]] = 1;
	// }
	// for(int i = 1;i <= n;i++){
	// 	if(hash[i] == 0){
	// 		ans = i;
	// 		break;
	// 	}
	// }
	// return ans;

	// Optimal Solution 1
	// int n = a.size();
	// int sum = (n * (n + 1)) / 2;
	// for(int i = 0;i < n;i++) sum -= a[i];
	// return sum;

	// Optimal Solution 2
	// int n = a.size();
	// int ans = 0;
	// for(int i = 0;i < n;i++){
	// 	ans ^= a[i];
	// 	ans ^= (i + 1);
	// }
	// return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int ans = missingNumber(a);	
	cout << ans << "\n";
}