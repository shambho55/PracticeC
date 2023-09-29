#include <bits/stdc++.h>
using namespace std;

#define ll long long

int linearSearch(int n,vector<int> &nums,int num){
	for(int i = 0;i < n;i++){
		if(nums[i] == num) return i;
	}
	return -1;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int num;	
	cin >> num;
	int ans = linearSearch(n,a,num);
	cout << ans << "\n";
}