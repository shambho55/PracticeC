 #include <bits/stdc++.h>
using namespace std;
int main(){

	int n,d;
	cin >> n >> d;
	int q , r;  
	q = n / d;
	r = n % d;
	if(r == 0){
		cout << q << endl;
	}
	else{
		cout<< q << " " << r << "/" << d <<endl;
	}
}