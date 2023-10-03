#include <bits/stdc++.h>
using namespace std;

#define ll long long

// void reverseArray(vector<int> &a,int j,int k){
// 	if(j >= k) return;
// 	int temp = a[j];
// 	a[j] = a[k];
// 	a[k] = temp;
// 	reverseArray(a,j + 1,k - 1);
// }

void reverseArray(vector<int> &a,int i,int n){
	if(i >= (n) / 2) return;
	int temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	reverseArray(a,i + 1,n);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int j = 0,k = n - 1;
	// reverseArray(a,j,k);	
	reverseArray(a,j,n);
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";
}