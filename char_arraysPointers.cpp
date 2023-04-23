#include <iostream>
using namespace std;
int main(){

	char str[] = "abcde";
	// Bad Practice should be avoided because cout behaves differently in case char array and pointers
	//char *pstr = "abcde";
	int a[] = {1,2,3};
	char b[] = "abc";
	cout << a << endl;
	cout << b << endl;
	cout << b[0] << endl;

	char *pb = &b[0];
	cout << pb << endl;
	cout << pb[1] << endl;

	char c = 'a';
	char *pc = &c;
	cout << c << endl;
	cout << pc << endl;
}