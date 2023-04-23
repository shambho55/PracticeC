#include <iostream>
using namespace std;

void increment(int &n){
	n++;
}

// Bad Practice
int& f(int n){
	int a = n;
	return a;
}

// Bad Practice
int* f2(){
	int i = 10;
	return &i;
}

int main(){
	int i ;
	i = 10;
	int& j = i;

	int *p = f2();
	cout << * p << endl;

	int& k1 = f(i);
	cout << k1 << endl; 
	//'j' declared as reference but not initialized
	//j = i;
	increment(i);
	cout << i << endl; 
	i++;
	cout << j << endl;
	j++;
	cout << i << endl;
	int k = 100;
	j = k;
	cout << i << endl;

} 