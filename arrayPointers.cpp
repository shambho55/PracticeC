#include <iostream>
using namespace std;

int sum(int *a,int n){
	//cout << sizeof(a) << endl;
	int ans = 0;
	for(int i = 0;i < n;i++){
		ans += a[i];
	}
	return ans;
}

int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p = a;
	cout << sizeof(a) << endl;
	cout << sum(p + 3,7) << endl;
}