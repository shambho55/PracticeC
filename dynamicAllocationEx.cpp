#include <iostream>
using namespace std;
#define MULTIPLY(a,b) a*b
#define SQUARE(x) x*x
void updateValue(int* p){
	*p = 610 % 255;
}
int main(){
	char ch = 'A';
	char *pt = &ch;
	updateValue((int*)pt);
	//cout << ch;

	int *p = new int[5];
	cout << p << endl;
	delete p;
	cout << p << endl;

	cout << MULTIPLY(2 + 3,3 + 5) << endl;

	int x = 36/SQUARE(6);
	cout << x << endl;

	int r = 5;
	int const *q = &r;
	r++;
	cout << r << endl;
	q++;
	//(*q)++ gives error as path is const
	cout << r << endl;

	int p1 = 7;
	int * const q1 = &p1;
	p1++;
	cout << *q1 << endl;
	
	//q1++ , As q1 is read-only variable;
	(*q1)++;
	cout << *q1 << endl; 

	int p2 = 10;
	int const * const q2 = &p2;

	p2++;
	cout << *q2 << endl;
	// q2++ and (*q2)++ can't be done as it's a const

	int const p3 = 15;
	int const *q3 = &3p;

	cout << q3 << endl;
	cout << *q3 << endl;
	q3++;
	cout << q3 << endl;
	cout << *q3 << endl;
	// p3++ and (*q3)++ gives error as they are const
	return 0;
}