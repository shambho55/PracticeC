#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> lastVisitedIntegers(vector<string>& words) {
	vector<int> ans,nums;
    int n = words.size(),count = 0,temp = 0,ch = 0;
    for(int i = 0;i < n;i++){
		if(words[i] != "prev"){
        	nums.push_back(stoi(words[i]));
            count = 0;
           }
        if(words[i] == "prev"){
            count++;
            if(count <= nums.size()){ 
				reverse(nums.begin(),nums.end());
				ans.push_back(nums[count - 1]);
				reverse(nums.begin(),nums.end());
                }
            else {ans.push_back(-1);}
            }
        }
    return ans;
 }

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<string> words(n);
		for(int i = 0;i < n;i++) cin >> words[i];
		vector<int> ans = lastVisitedIntegers(words);
		for(int i = 0;i < ans.size();i++) cout << ans[i] << " ";
		cout << "\n";
	}
}