#include <iostream>
using namespace std;
int main(){
	int i = 65;
	char c = i;
	// Implicit Typecasting
	cout << c << endl;
	int *p = &i;
	//Explicit Typecasting
	char *pc = (char*)p;
	cout << *p << endl;
	// There are two types storing numbers : 1> Litte Endian 2> Big Endian
	// Here Litte Endian is taking place
	cout << *pc << endl;	
	cout << *(pc + 1) << endl;
	cout << *(pc + 2) << endl;
	cout << *(pc + 3) << endl;
}  