#include <iostream>
using namespace std;

void increment(int **p){
	(**p)++;
}
int main(){
	int num = 10;
	int *ptr = &num;
	increment(&ptr);
	cout << num << endl;

	int a = 100;
	int *p = &a;
	int **q = &p;
	int b = (**q)++;
	int *r = *q;
	(*r)++;
	cout << p << endl;
	cout << r << endl;
	cout << &a << endl;
	cout << *r << endl;
	cout << a << " " << b << endl;

	int x = 100;
	int *y = &x;
	int **z = &y;
	int t = (**z)++ + 4;
	cout << x << " " << t << endl;

}