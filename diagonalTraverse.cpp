#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(),n = mat[0].size();
        int mn = (m * n);
        vector<int> arr(mn);
        int j = 0,l = 0,k = 0;
        // arr[j++] = mat[l][k++];
        while(j < mn){
            for(;l < m && k >= 0;l--,k++){
                if(l < 0){
                    l++;
                    break;
                }
                arr[j++] = mat[l][k];
                if(k == n - 1){
                    l++;
                    break;
                }
            }
            if(j >= mn) break;
            for(;l >= 0 && k < n;l++,k--){
                if(k < 0){
                    k++;
                    break;
                }
                arr[j++] = mat[l][k];
                if(l == m - 1){
                    k++;
                    break;
                }
            }
            if(j >= mn) break;
        }
        return arr;
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
    vector<int> ans = findDiagonalOrder(mat);
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
    cout << "\n";
}