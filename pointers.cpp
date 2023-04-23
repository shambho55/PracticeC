#include <iostream>
using namespace std;
int main(){
	int i;
	cout << &i << endl;
	i = 5;
	i = i + 2;
	cout << &i << endl;
	int *p = &i;
	cout << p << endl;
	cout << *p << endl;
	cout << &p << endl;
	cout << "size of int variable i : " << sizeof(i) << endl;
	cout << "size of pointer to a int variable p : " << sizeof(p) << endl;

	i++;
	cout << "After incrementing i : " << i << endl;
	cout << "After incrementing i : " << *p << endl;

	(*p)++;
	cout << "After incrementing *p value of i : " << i << endl;
	cout << "After incrementing *p value of *p : " << *p << endl;

	int a = *p;
	a++;
	cout << a << endl;
	cout << *p << endl;
	
	int *q = p;
	cout << q << endl;
	cout << &p << endl;

	cout << *q << endl;

 
}