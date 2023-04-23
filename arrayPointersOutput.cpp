#include <iostream>
using namespace std;

void changeSign(int *p){
	(*p) = (*p) * (-1);
}

void fun(int a[]){
	cout << a[0] << " ";
}

void square(int *p){
	int var = 10;
	p = &var;
	(*p) = (*p) * (*p);
	cout << "Value in square Function : " << var << endl;
}
int main(){
	int a = 10;
	changeSign(&a);
	cout << a << endl;

	int arr[] = {1,2,3,4};
	fun(arr + 1);
	cout << arr[0] << endl;

	int var = 10;
	square(&var);
	cout << var << endl;


}