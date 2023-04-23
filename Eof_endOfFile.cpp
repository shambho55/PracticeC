#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// General approach
	/*int tc;
	cin >> tc;
	while(tc--){
		int a,b;
		cin >> a >> b;
		cout << (a + b) << "\n";
	}*/
	// Better way to solve
	/*int a,b;
	while((cin >> a >> b),(a || b)){
		cout << (a + b) << "\n";
	}
	*/
	// Good way to solve
	int a,b;
	//while((cin >> a >> b) == 2) OR
	while((cin >> a >> b) =! EOF){
		cout << (a + b) << "\n";
	}
}