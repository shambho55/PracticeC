#include <iostream>
using namespace std;

long long int combRecur(long long int n){
	if(n == 0 || n == 1){
		return 1;
	}
	long long int smallOutput = combRecur(n - 1);
	return n * smallOutput;
}

int main(){
	long long int n,r;	
	cin >> n >> r;
	if((n >= 0 && n >= r) && (r >=0 && r <= 30)){
	long long int comb_n = combRecur(n);
	cout << comb_n << endl; 
	long long int comb_r = combRecur(r);
	cout << comb_r << endl;
	long long int comb_n_r = combRecur(n - r);
	cout << comb_n_r << endl;
	//long long ans = ((comb_n) / (comb_r * comb_n_r));
	//cout << ans;
	}
}