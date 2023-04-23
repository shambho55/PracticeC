#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a,int start,int mid,int end){
	vector<int> left,right;
	for(int i = start;i <= end;i++){
		if(i <= mid) left.push_back(a[i]);
		else right.push_back(a[i]);
	}	
	int n = left.size(),m = right.size();
	int i = 0,j = 0,p = start;
	while(i < n && j < m){
		if(left[i] < right[j]){
			a[p] = left[i];
			p++;
			i++;
		}
		else{
			a[p] = right[j];
			p++;
			j++;
		}
	}
	while(i < n){
		a[p] = left[i];
		p++;
		i++;
	}
	while(j < m){
		a[p] = right[j];
		p++;
		j++;
	}
}

void mergeSort(vector<int> &a,int start,int end){
	if(start >= end) return;
	int mid = (start + end) / 2;
	mergeSort(a,start,mid);
	mergeSort(a,mid + 1,end);
	merge(a,start,mid,end);
}
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	mergeSort(a,0,n - 1);
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}