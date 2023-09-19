#include <bits/stdc++.h>
using namespace std;

#define ll long long 

 static bool cmp(const pair<int,int> &a,const pair<int,int> &b){
 		if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
    	// Approach 1 Used by me
        // vector<pair<int,int>> p;
        // int m = mat.size(),n = mat[0].size();
        // for(int i = 0;i < m;i++){
        //     int count = 0;
        //     for(int j = 0;j < n;j++){
        //         if(mat[i][j] == 1) count++;
        //     }
        //     p.push_back({i,count});
        // }
        // sort(p.begin(),p.end(),cmp);
        // vector<int> a(k);
        // for(int i = 0;i < k;i++){
        //     a[i] = p[i].first;
        // }
        // return a;

        //Approach 2 space optimization
    	// priority_queue<pair<int,int>> pq;
        // int m = mat.size(),n = mat[0].size();
        // for(int i = 0;i < m;i++){
        //     int count = 0;
        //     for(int j = 0;j < n;j++){
        //         if(mat[i][j] != 1) break;
        //         count++;
        //     }
        //     pq.push({count,i});
        //     if(pq.size() > k) pq.pop();
        // }
        // vector<int> a;
        // while(pq.size() > 0){
        //     a.push_back(pq.top().second);
        //     pq.pop();
        // }
        // reverse(a.begin(),a.end());
        // return a;

        // Approach 3 Time Optimization
        int m = mat.size(),n = mat[0].size();
        vector<pair<int,int>> p;
        for(int i = 0;i < m;i++){
            int l = lower_bound(mat[i].begin(),mat[i].end(),0,greater<int>()) - mat[i].begin();
            p.push_back({l,i});
        }
        sort(p.begin(),p.end());
        vector<int> ans(k);
        for(int i = 0;i < k;i++){
            ans[i] = p[i].second;
        }
        return ans;
    }

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int m,n;
	cin >> m >> n;
	vector<vector<int>> mat(m,vector<int>(n));
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			cin >> mat[i][j];
		}
	}
	int k;
	cin >> k;
	vector<int> ans = kWeakestRows(mat,k);
	for(int i = 0;i < k;i++){
		cout << ans[i] << " ";
	}
	cout << "\n";
	// vector<pair<int,int>> a = kWeakestRows(mat,k);
	// for(int i = 0;i < m;i++){
	// 	cout << a[i].first << " " << a[i].second << "\n";
	// }
}


