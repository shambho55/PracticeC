#include <bits/stdc++.h>
using namespace std;

#define ll long long

void merge(vector<int> &a,int i,int mid,int n){
	vector<int> arr(n + 1);
	int k = 0,j = mid + 1,it = i;
	while(it <= mid && j <= n){
		if(a[it] <= a[j]){
			arr[k++] = a[it++];
		}
		else{
			arr[k++] = a[j++];
		}
	}
	while(it <= mid){
		arr[k++] = a[it++];
	}
	while(j <= n){
		arr[k++] = a[j++];
	}
	for(int l = i;l <= n;l++) a[l] = arr[l - i];
}

void mergeSort(vector<int> &a,int i,int n){
	if(i >= n) return;
	int mid = (i + n) / 2;
	mergeSort(a,i,mid);
	mergeSort(a,mid + 1,n);
	merge(a,i,mid,n);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	mergeSort(a,0,n - 1);	
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";
}