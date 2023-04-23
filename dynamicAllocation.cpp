#include <iostream>
using namespace std;
int main(){
	int* p = new int;

	double* pd = new double;

	char* pc = new char;

	int *arr = new int[50];
	int max = -1;
	int n;
	cin >> n;
	int *arr1 = new int[n];
	for(int i = 0;i < n;i++){
		cin >> arr1[i];
		if(max < arr1[i]){
			max = arr1[i];
		}
	}
	cout << max << endl;
	delete p;
	delete pd;
	delete pc;
	delete [] arr;
	delete [] arr1;
}