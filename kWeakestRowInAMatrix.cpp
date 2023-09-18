#include <bits/stdc++.h>
using namespace std;

#define ll long long 

 static bool cmp(const pair<int,int> &a,const pair<int,int> &b){
 		if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> p;
        int m = mat.size(),n = mat[0].size();
        for(int i = 0;i < m;i++){
            int count = 0;
            for(int j = 0;j < n;j++){
                if(mat[i][j] == 1) count++;
            }
            p.push_back({i,count});
        }
        sort(p.begin(),p.end(),cmp);
        vector<int> a(k);
        for(int i = 0;i < k;i++){
            a[i] = p[i].first;
        }
        return a;
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


