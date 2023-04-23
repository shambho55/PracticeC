#include <iostream>
using namespace std;
int main(){
	int a[10];
	cout << a << endl;
	cout << a[0] << endl;
	a[0] = 10;
	a[1] = 6;
	cout << *a << endl;
	cout << *(a + 1) << endl;
	cout << 1[a] << endl;
	cout << &a << endl;

	int *p = &a[0];
	cout << p << endl;
	cout << a << endl;

	cout << &p << endl;
	cout << &a << endl;

	p = p + 1;
	cout << p << endl;
	// Arrays cannot be assigned
	//a = a + 1;
	p = a + 1;
	cout << p << endl;
	cout << (*p + 1) << endl;
}