#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> intersection(vector<int> &nums1,vector<int> &nums2){

	//Brute Force Approach
// 	 int n1 = nums1.size(),n2 = nums2.size();
//         map<int,int> mp;
//         vector<int> ans;
//         for(int i = 0;i < n1;i++){
//             mp[nums1[i]]++;
//         }
//         for(int i = 0;i < n2;i++){
//             if(mp[nums2[i]] > 0){
//                 ans.push_back(nums2[i]);
//                 mp[nums2[i]] = 0;
//             }
//         }
//         return ans;

	// Better Approach
	// sort(nums1.begin(),nums1.end()),sort(nums2.begin(),nums2.end());
	// set<int> s;
	// int n1 = nums1.size(),n2 = nums2.size(),i = 0,j = 0;
	// while(i < n1 && j < n2){
	// 	if(nums1[i] == nums2[j]){
	// 		s.insert(nums1[i]);
	// 		i++;
	// 		j++;
	// 	}
	// 	else if(nums1[i] < nums2[j]){
	// 		i++;
	// 	}
	// 	else{
	// 		j++;
	// 	}
	// }
	// int n_s = s.size(),k = 0;
	// vector<int> ans(n_s);
	// for(auto it:s){
	// 	ans[k++] = it;
	// }
	// return ans;

	// Optimal Approach
	 vector<int> ans; 
        sort(nums1.begin(),nums1.end()),sort(nums2.begin(),nums2.end());
        int n1 = nums1.size(),n2 = nums2.size(),i = 0,j = 0;
        while(i < n1 && j < n2){
            if(nums1[i] == nums2[j] && ans.size() == 0){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] == nums2[j] && ans.size() > 0 && ans.back() != nums1[i]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int> a1(n),a2(m);
	for(int i = 0;i < n;i++) cin >> a1[i];
	for(int i = 0;i < m;i++) cin >> a2[i];
	vector<int> ans = intersection(a1,a2);
	for(int i = 0;i < ans.size();i++) cout << ans[i] << " ";
	cout << "\n";
}