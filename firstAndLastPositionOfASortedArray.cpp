#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int binSear(vector<int> &nums,int n,int target){
        int st = 0,en = n - 1,ans = -1;
        while(st <= en){
            int mid = (st + en) / 2;
            if(nums[mid] < target){
                st = mid + 1;
            }
            else if(nums[mid] > target){
                en = mid - 1;
            }
            else{
                ans = mid;
                st = mid + 1;
            }
        }
        return ans;
    }
int binSear1(vector<int> &nums,int n,int target){
        int st = 0,en = n - 1,ans = -1;
        while(st <= en){
            int mid = (st + en) / 2;
            if(nums[mid] < target){
                st = mid + 1;
            }
            else if(nums[mid] > target){
                en = mid - 1;
            }
            else{
                ans = mid;
                en = mid - 1;
            }
        }
        return ans;
    }

vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int n = nums.size();
        int a = binSear(nums,n,target),b = binSear1(nums,n,target);
        ans[0] = b,ans[1] = a;
        return ans;
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
	vector<int> ans = searchRange(a,target);
	for(int i = 0;i < 2;i++) cout << ans[i] << " ";
	cout << "\n";
}