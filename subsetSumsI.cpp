#include <bits/stdc++.h>
using namespace std;

#define ll long long

void subsetSums(vector<int> &input,int k,int n,vector<int> &output,int sum){
	if(k >= n){
		output.push_back(sum);
		return;
	}
	subsetSums(input,k + 1,n,output,sum);
	subsetSums(input,k + 1,n,output,sum + input[k]);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,sum = 0,k = 0;
		cin >> n;
		vector<int> input(n);
		for(int i = 0;i < n;i++){
			cin >> input[i];
		}
		vector<int> output;
		subsetSums(input,k,n,output,sum);
		sort(output.begin(),output.end());
		for(int i = 0;i < output.size();i++) cout << output[i] << " ";
		cout << "\n";
	}
}