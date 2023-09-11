#include <bits/stdc++.h>
using namespace std;

#define ll long long 

// int binarySearch(vector<int> &a,int target){
// 	int s = 0,e = a.size() - 1;
// 	while(s <= e){
// 		int mid = s + (e - s) / 2;
// 		if(a[mid] == target){
// 			return mid;
// 		}
// 		else if(a[mid] < target){
// 			s = mid + 1;
// 		}
// 		else{
// 			e = mid - 1;
// 		}
// 	}
// 	return -1;
// }

bool searchMatrix(vector<vector<int>> &matrix,int target){
	// bool ch = false;
	// for(int i = 0;i < matrix.size();i++){
	// 	int ans = binarySearch(matrix[i],target);
	// 	if(ans > -1){
	// 		ch = true;
	// 		break;
	// 	}
	// }
	// return ch;
	int n = matrix.size();
	int m = matrix[0].size();
	int i = 0,j = m - 1;
	while(i < n && j >= 0){
		if(matrix[i][j] == target){
			return true;
		}
		else if(matrix[i][j] < target){
			i++;
		}
		else{
			j--;
		}
	}
	return false;
}

int main(){
	int n,m;
	cin >> n >> m;
	vector<vector<int>> matrix(n,vector<int>(m));
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> matrix[i][j];
		}
	}
	int target;
	cin >> target;
	// bool ans = searchMatrix(matrix,target);
	// cout << ans << "\n";
	cout << searchMatrix(matrix,target) << "\n";
}