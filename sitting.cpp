#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int r,s;
	cin >> r >>s;
	int nos = r * s;
	int tickets;
	cin >> tickets;
	if(nos >= tickets){
		cout<< tickets << " " << "0"<<endl;
	}
	else{
		cout<< nos << " " << tickets - nos <<endl;
	}

	return 0;
}