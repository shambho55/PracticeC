#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]){
	int len = strlen(input);
	char *output = new char[len]{'A'};
	int count = 0;
	for(int i = 0;i < len;i++){
		if(input[i] != 32){
			output[count++] = input[i];
		}
	}
	// int i = 0;
	// for(;i < len - count;i++){
	// 	input[i] = output[i];
	// }	
	//input[i] = '\0';	
	int lenO = strlen(output);
	// for(int i = 0;i < lenO;i++){
	// 	cout << output[i];
	// }
	strcpy(input,output);
	cout << input;
}
int main(){
	char input[100000];
	cin.getline(input,100000);
	trimSpaces(input);
	//cout << char(a) + char(c) << endl;
}