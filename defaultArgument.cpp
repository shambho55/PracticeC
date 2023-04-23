#include <iostream>
using namespace std;
// Giving default values to arguments starts from right most side to avoid confusion to compiler

int sumArray(int n,int a[],int si = 0){
	int ans = 0;
	for(int i = 0;i < n;i++){
		ans += a[i];
	}
	return ans;
}

int sum(int a,int b = 0,int c = 0,int d = 0){
	return a + b + c + d;
}
int main(){
	int n;
	cin >> n;
	int *p = new int[n];
	for(int i = 0;i < n;i++){
		cin >> p[i];
	}
	cout << sumArray(n,p) << endl;
	cout << sum(1,2,8,9) << endl;

}