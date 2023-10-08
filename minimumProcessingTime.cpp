#include <bits/stdc++.h>
using namespace std;

#define ll long long

int minProcessingTime(vector<int> &processorTime,vector<int> &tasks){
	int n = processorTime.size(),m = tasks.size();
	int ans = 0;
	sort(tasks.begin(),tasks.end());
	sort(processorTime.begin(),processorTime.end());
	reverse(processorTime.begin(),processorTime.end());
	int i = 0,j = 0;
	while(i < n){
		int count = 0;
		while(j < m){
			if(count == 4) break;
			ans = max(ans,processorTime[i] + tasks[j]);
			count++,j++;
		}
		i++;
	}
	return ans;
}

int main(){	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int> processorTime(n),tasks(m);
	for(int i = 0;i < n;i++) cin >> processorTime[i];
	for(int i = 0;i < m;i++) cin >> tasks[i];
	int ans = minProcessingTime(processorTime,tasks);
	cout << ans << "\n";	
}