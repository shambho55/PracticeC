#include <iostream>	
using namespace std;

void increment(int a,int arr[],int n){
	a++;
	arr[0]++;
	cout << "a in Function : " << a << endl;
	cout << "b[0] in Function : " << arr[0] << endl;
}	
void reverse(int input[],int n){
	int i = 0,j = n - 1;
	while(i < j){
		input[i] = input[i] + input[j];
		input[j] = input[i] - input[j];
		input[i] = input[i] - input[j];
		i++;
		j--;
	}
}

void printArray(int input[],int n){
	for(int i = 0;i < n;i++){
		cout << input[i] << " " ;
	}
}
int main(){
	int a = 10;
	int b[10] = {1,2,3,4,5};

	//increment(a,b,10);
	cout << "a in main : " << a << endl;
	cout << "b[0] in main : " << b[0] << endl;	
	reverse(b,5);
	printArray(b,5);

}