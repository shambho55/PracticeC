#include <iostream>
using namespace std;

inline int max(int a,int b){
	// int c;
	// if(a > b){
	// 	c = a;
	// }
	// else{
	// 	c = b;
	// }
	// return c;
	return (a > b) ? a : b;
}
int main(){
	int a,b;
	cin >> a >> b;
	
	int c = max(a,b);
	cout << c << endl;
	
	int x,y;
	x = 22;
	y = 34;
	
	int res = max(x,y);
	
	cout << res << endl;	
}