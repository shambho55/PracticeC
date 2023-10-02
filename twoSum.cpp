#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> twoSum(vector<int> &a,int target){
	int n = a.size();
	vector<int> output(2,0);

	//Brute Force Approach
	// for(int i = 0;i < n;i++){
	// 	for(int j = i + 1;j < n;j++){
	// 		if(a[i] + a[j] == target){
	// 			output[0] = i;
	// 			output[1] = j;
	// 			break;
	// 		}
	// 	}		
	// }

	// Optimal Solution
	map<int,int> mp;
	for(int i = 0;i < n;i++){
		if(mp.count(target - a[i])){
			output[0] = mp[target - a[i]];
			output[1] = i;
			break;
		}	
		mp[a[i]] = i;
	}

	return output;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int target;	
	cin >> target;
	vector<int> ans = twoSum(a,target);
	for(int i = 0;i < ans.size();i++) cout << ans[i] << " ";
	cout << "\n";	
}