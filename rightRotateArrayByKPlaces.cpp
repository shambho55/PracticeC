#include <bits/stdc++.h>
using namespace std;

#define ll long long

void reverseArray(vector<int> &a,int start,int end){
	while(start < end){
		a[start] = a[start] ^ a[end];
		a[end] = a[start] ^ a[end];
		a[start] = a[start] ^ a[end];
		start++;
		end--;
	}
}

void rotateArray(vector<int> &a,int k){
	int n = a.size();
	k = k % n;
	// Brute Force Approach
	// vector<int> temp(n - k);
	// for(int i = 0;i < n - k;i++){
	// 	temp[i] = a[i];
	// }
	// for(int i = n - k;i < n;i++){
	// 	a[i - (n - k)] = a[i];
	// }
	// for(int i = k;i < n;i++){
	// 	a[i] = temp[i - k];
	// }

	// Optimal Approach
	// reverseArray(a,0,n - k - 1);
	// reverseArray(a,n - k,n - 1);
	// reverseArray(a,0,n - 1);
	//OR
	reverseArray(a,0,n - 1);
	reverseArray(a,0,k - 1);
	reverseArray(a,k,n - 1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int k;	
	cin >> k;
	rotateArray(a,k);
	for(int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}