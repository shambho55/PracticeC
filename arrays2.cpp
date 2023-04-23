#include <iostream>
using namespace std;

void printArray(int input[],int n){
	//cout << "Function : " << sizeof(input) << endl;
	for(int i = 1;i <= n;i++){
		cout << input[i] << " ";
	}
	cout << endl;
}
int main(){
	int n;
	cin >> n;
	int input[100];
	
	for(int i = 1;i <= n;i++){
		cin >> input[i];
	}
	cout << input << endl;
	cout << "Main : " << sizeof(input) << endl;
	printArray(input,n);
}