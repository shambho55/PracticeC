#include <iostream>
using namespace std;

void g(int const &a){
	// cannot change constant reference passed
	//a++;
}

void f(int const *p){
	// cannot change constant pointer passed
	//(*p)++;

}
int main(){
	int const i = 20;
	int const *p = &i;
 
	int j = 12;
	int *p3 = &j;
	f(p3);
	g(j);
	cout << "j : " << j << endl;
	int const *p2 = &j;
	j++;
	cout << j++ << endl;
	cout << (*p2) << endl;

	int i1 = 10;
	int j1 = 21;
	// means constant storage pointing not pointer is constant
	int const *p1 = &i1;
	p1 = &j1;
	cout << *p1 << endl;
	// means p4 is constant pointer to integer not constant storage pointing
	int * const p4 = &i1;
	(*p4)++;
	cout << *p4 << endl;
	// This can't be done since it's a constant pointer
	//p4 = &j1;


	int const * const p5 = &i1;
	i1++;
	//p5 = &j;
	//(*p5)++;
	cout << *p5 << endl;
}