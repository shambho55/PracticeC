#include <bits/stdc++.h>
using namespace std;

#define ll long long 

bool escapeGhosts(vector<vector<int>> ghosts,vector<int> target){
	int travel = abs(target[0]) + abs(target[1]);
	for(int i = 0;i < ghosts.size();i++){
		int ghostsTravel = abs(ghosts[i][0] - target[0]) + abs(ghosts[i][1] - target[1]);
		if(ghostsTravel <= travel) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<vector<int>> ghosts(n,vector<int>(2));
	for(int i = 0;i < n;i++){
		for(int j = 0;j < 2;j++){
			cin >> ghosts[i][j];
		}
	}	
	vector<int> target(2);
	for(int i = 0;i < 2;i++) cin >> target[i];
	bool ans = escapeGhosts(ghosts,target);		
	cout << ans << "\n";
}