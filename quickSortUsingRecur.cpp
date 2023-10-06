#include <bits/stdc++.h>
using namespace std;

#define ll long long

int partition(vector<int> &a,int i,int n){
	int j = i,k = n;
	int pivot = a[i];
	while(j < k){
		while(a[j] <= pivot && j < n){
			j++;
		}
		while(a[k] > pivot && k > i){
			k--;
		}
		if(j < k) {
			swap(a[j],a[k]);
		}
	}	
	swap(a[k],a[i]);
	return k;
}

void quickSort(vector<int> &a,int i,int n){
	if(i < n){
		int partitionIndex = partition(a,i,n);
		quickSort(a,i,partitionIndex - 1);
		quickSort(a,partitionIndex + 1,n);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	int i = 0;
	quickSort(a,i,n - 1);
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";
	}