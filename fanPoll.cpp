#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
    cin >> a >> b >> c;
    if(max(a,max(b,c)) == a) cout << "Yes" << "\n";
    else cout << "No" << "\n";
	return 0;
}
