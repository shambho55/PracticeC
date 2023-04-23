 #include <iostream>
using namespace std;
int main(){
	int a = 10;
	int *p = &a;
	cout << p << endl;
	p = p + 2;
	cout << p << endl;

	p = p - 2;
	cout << p << endl;

	char c = 'a';
	char *pc = &c;
	cout << pc << endl;
	pc = pc + 2;
	cout << pc << endl;

	pc = pc - 2;
	cout << pc << endl;

	double d = 102.555;
	double *pd = &d;

	cout << pd << endl;
	pd = pd + 2;
	cout << pd << endl;
	pd = pd - 2;
	cout << pd << endl;


}