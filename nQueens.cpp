#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Approach 1

// bool isSafe(int row,int col,vector<string> board,int n){
// 	int tempRow = row,tempCol = col;
// 	while(tempCol >= 0){
// 		if(board[tempRow][tempCol] == 'Q') return false;
// 		tempCol--;
// 	}
// 	tempCol = col;
// 	while(tempRow >= 0 && tempCol >= 0){
// 		if(board[tempRow][tempCol] == 'Q') return false;
// 		tempCol--;
// 		tempRow--;
// 	}
// 	tempCol = col;
// 	tempRow = row;
// 	while(tempRow < n && tempCol >= 0){
// 		if(board[tempRow][tempCol] == 'Q') return false;
// 		tempCol--;
// 		tempRow++;
// 	}
// 	return true;
// }

// void checkPath(vector<string> &board,int col,vector<vector<string>> &ans,int n){
// 	if(col == n){
// 		ans.push_back(board);
// 		return;
// 	}
// 	for(int row = 0;row < n;row++){
// 		if(isSafe(row,col,board,n)){
// 			board[row][col] = 'Q';
// 			checkPath(board,col + 1,ans,n);
// 			board[row][col] = '.';
// 		}
// 	}
// }

// Optimized Approach

void PathExist(vector<string> &board,int col,vector<vector<string>> &ans,int n,vector<int> &leftRow,vector<int> &lowerDiagonal,vector<int> &upperDiagonal){
	if(col == n){
		ans.push_back(board);
		return;
	}
	for(int row = 0;row < n;row++){
		if(leftRow[row] == 0 && lowerDiagonal[col + row] == 0 && upperDiagonal[n - 1 + col - row] == 0){
			board[row][col] = 'Q';
			leftRow[row] = 1;
			upperDiagonal[n - 1 + col - row] = 1;
			lowerDiagonal[row + col] = 1;
			PathExist(board,col + 1,ans,n,leftRow,lowerDiagonal,upperDiagonal);
			board[row][col] = '.';
			leftRow[row] = 0;
			upperDiagonal[n - 1 + col - row] = 0;
			lowerDiagonal[row + col] = 0;
		}
	}
}

vector<vector<string>> nQueens(int n){
	vector<string> board(n);
	vector<vector<string>> ans;
	string s(n,'.');
	for(int i = 0;i < n;i++){
		board[i] = s;
	}
	vector<int> leftRow(n,0),upperDiagonal(2 * n - 1,0),lowerDiagonal(2 * n - 1,0);
	// checkPath(board,0,ans,n);
	PathExist(board,0,ans,n,leftRow,lowerDiagonal,upperDiagonal);
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
		vector<vector<string>> ans = nQueens(n);
		for(int i = 0;i < ans.size();i++){
			for(int j = 0;j < ans[i].size();j++){
				cout << ans[i][j] << "\n";
			}
			cout << "\n";
		}
	}
}