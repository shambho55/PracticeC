#include <bits/stdc++.h>
using namespace std;

#define ll long long 

void ReverseArray(vector<int> &nums,int start,int end){
	// int temp = 0;
	while(start < end){
		// temp = nums[start];
		// nums[start] = nums[end];
		// nums[end] = temp;
		nums[start] = nums[start] ^ nums[end];
		nums[end] = nums[start] ^ nums[end];
		nums[start] = nums[start] ^ nums[end];
		start++;
		end--;
	}
}

vector<int> rotateArray(vector<int> &a,int d){
	int n = a.size();
	
	// Brute Force Approach
	// vector<int> temp(d);
	// for(int i = 0;i < d;i++){
	// 	temp[i] = a[i];
	// }
	// for(int i = d;i < n;i++){
	// 	a[i - d] = a[i]; 
	// }
	// for(int i = n - d;i < n;i++){
	// 	a[i] = temp[i - (n - d)];
	// }
	// return a;

	//Optimal Approach
	ReverseArray(a,0,d - 1);
	ReverseArray(a,d,n - 1);
	ReverseArray(a,0,n - 1);
	return a;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int d;
	cin >> d;
	vector<int> ans;	
	ans = rotateArray(a,d);
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";
}