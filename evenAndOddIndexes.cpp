#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int* arr = new int [n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int i = 0;
	int sum_even = 0,sum_odd = 0;
	while(i < n){
		if(i % 2 == 0 and arr[i] % 2 == 0){
			sum_even += arr[i];
		}
		else if(i % 2 != 0){
			sum_odd += arr[i];
		}
		i++ ;
	}
	cout << sum_even << " " << sum_odd << endl;
}