#include <bits/stdc++.h>
using namespace std;

#define ll long long

void moveZeroes(vector<int> &a){
	
	// Brute Force Approach
	// vector<int> temp_arr;
	// for(int i = 0;i < n;i++){
	// 	if(a[i] != 0){
	// 		temp_arr.push_back(a[i]);
	// 	}
	// }
	// int t = temp_arr.size();
	// for(int i = 0;i < t;i++){
	// 	a[i] = temp_arr[i];
	// }
	// for(int i = t;i < n;i++){
	// 	a[i] = 0;
	// }

	// Optimal Approach
	int n = a.size(),nZ = -1,temp = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == 0){
			nZ = i;
			break;
		}
	}
	if(nZ == -1) return;
	for(int i = nZ + 1;i < n;i++){
		if(a[i] > 0){
			temp = a[nZ];
			a[nZ++] = a[i];
			a[i] = temp;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	moveZeroes(a);	
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";
}
