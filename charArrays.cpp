#include <iostream>
using namespace std;	

int length(char input[]){
	int count = 0;
	for(int i = 0;input[i] != '\0';i++){
		count++;
	}
	return count;
}
int main(){	
	char name[100];
	cout << "Enter name : ";
	cin >> name;
	// name[4] = 'i';
	// name[6] = '5'; 
	// name[1] = '\0';
	cout << name << endl;
	cout << "Length : " << length(name) << endl; 
}