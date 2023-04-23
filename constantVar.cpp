#include <iostream>
using namespace std;
int main(){
	// constant int
	const int i = 11;
	int const i1 = 10;

	// constant reference from a non const int
	int j = 12;
	// Only path becomes constant not the storage
	const int& k = j;
//	k++;
	j++;
	cout << "k : " << k << endl;
	cout << "j : " << j << endl;

	//constant reference from a const int
	int const j1 = 13;
	int const &k1 = j1;

	// reference from a const int
	int const j3 = 159;
	int& k3 = j3;
	// We have read-only access
	//k3++;	

}