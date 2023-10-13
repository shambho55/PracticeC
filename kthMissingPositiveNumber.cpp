#include <bits/stdc++.h>
using namespace std;

#define ll long long

int findKthPositive(vector<int> &a,int k){
	// My First Solution; using O(n);
	// int n = a.size();
	// vector<int> arr(2001,0);
	// for(int i = 0;i < n;i++){
	// 	arr[a[i]] = 1;
	// }
	// int ans = 0;
	// for(int i = 1,j = 0;i < 2001;i++){
	// 	if(arr[i] == 0){
	// 		j++;
	// 	}
	// 	if(j == k){
	// 		ans = i;
	// 		break;
	// 	}
	// }
	// return ans;

	// Second Solution -- leetcode using O(n)
	// int n = a.size();
	// for(int i = 0;i < n;i++){
	// 	if(a[i] <= k) k++;
	// 	else break;
	// }
	// return k;

	// Third Solution -- leetcode using O(logn)
	int n = a.size(),st = 0,end = n - 1,ans = 0;
	while(st <= end){
		int mid = st + (end - st) / 2;
		int missEle = a[mid] - (mid + 1);
		if(missEle < k) st = mid + 1;
		else end = mid - 1;
	}
	return end + k + 1;
	// ans = a[end] + more; -- (i)
	// more = missing - k;  -- (ii)
	// missing = a[end] - (1 + end); -- (iii)
	
	// Using ii and iii
	// more = a[end] - (1 + end) - k;

	// more = k - a[end] + (1 + end); -- (iv)

	// Using i and iv
	// ans = k + 1 + end;
	// st = end + 1;
	// ans = st + k; 
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
	int ans = findKthPositive(a,k);
	cout << ans << "\n";
}