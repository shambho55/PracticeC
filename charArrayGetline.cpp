#include <iostream>
using namespace std;

int length(char input[]){
	int count = 0;
	for(int i = 0;input[i] != '\0';i++){
		count++;
	}
	return count;
}

void reverseString(char input[]){
	int i = 0,j = length(input) - 1;
	while(i < j){
		// input[i] = input[i] + input[j];
		// input[j] = input[i] - input[j];
		// input[i] = input[i] - input[j];
		input[i] = input[i] ^ input[j];
		input[j] = input[i] ^ input[j];
		input[i] = input[i] ^ input[j];		i++;
		j--;
	}
}
int main(){
	char input[100];
	// By default in getline function delimiter is \n
	// cin.getline(string_name,len,delimiter = '\n')
	cin.getline(input,100);
	// cin won't take input if there is any space , tab or newline after a letter
	//cin >> input;
	reverseString(input);
	cout << input << endl;

}