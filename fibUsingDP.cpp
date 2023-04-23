#include <iostream>
using namespace std;

int fib(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int fib2(int n,int *arr){
	if(n == 0 || n == 1){
		return 1;
	}
	if(arr[n] > 0){
		return arr[n];
	}
	int output = fib2(n - 1,arr) + fib2(n - 2,arr);
	arr[n] = output;
	return output;
}

int fib3(int n){
	int *arr = new int[n + 1];
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2;i <= n;i++){
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	int output = arr[n];
	delete [] arr;
	return output;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int *arr = new int[n + 1]{0};
	cout << fib(n) << "\n";
	cout << "fib Using DP with Recur " << fib2(n,arr) << "\n";
	cout << "fib Using only DP " << fib3(n) << "\n";
	delete [] arr;
}