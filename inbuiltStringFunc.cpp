#include <iostream>
using namespace std;	
#include <cstring>
int main(){
	char input1[100];
	char input2[100];
	cin.getline(input1,100);
	cin.getline(input2,100);

	cout << "Length Input 1: " << strlen(input1) << endl;
	cout << "Length Input 2: " << strlen(input2) << endl;

	if(strcmp(input1,input2) == 0){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}

	cout << "Before Copying : ";
	cout << "Input 1 :" << input1 << endl;
	cout << "Input 2 :" << input2 << endl;
	
	strcpy(input2,"Krishna");
	strcpy(input1,input2);
	cout << "After Copying : ";
	cout << "Input 1 :" << input1 << endl;
	cout << "Input 2 :" << input2 << endl;

	cout << "Before Copying n elements: ";
	cout << "Input 1 :" << input1 << endl;
	cout << "Input 2 :" << input2 << endl;
	
	strncpy(input2,"Radhika",6);
	strncpy(input1,input2,3);
	cout << "After Copying n elements: ";
	cout << "Input 1 :" << input1 << endl;
	cout << "Input 2 :" << input2 << endl;

}