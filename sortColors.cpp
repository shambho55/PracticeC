#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sortColors(vector<int> &a){
	int n = a.size();
	int i = 0,nZ = 0,nT = n - 1;
	int temp = 0;
	while(i <= nT){
		if(a[i] == 0){
			temp = a[i];
			a[i] = a[nZ];
			a[nZ] = temp;
			nZ++;
			i++;
		}
		else if(a[i] == 2){
			temp = a[i];
			a[i] = a[nT];
			a[nT] = temp;
			nT--;
		}
		else{
			i++;
		}
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
	sortColors(a);	
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";
}