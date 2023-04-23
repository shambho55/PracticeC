#include <iostream>
using namespace std;

int length(char input[]){
	int count = 0;
	for(int i = 0;input[i] != '\0';i++){
		count++;
	}
	return count;
}

int stringToNumberHelper(char input[],int count){
	if(count == 0){
		return int(input[0]) - int('0');
    }
	int smallOutput = stringToNumberHelper(input + 1,count - 1);
	int ans = int(input[0]) - int('0');
    for(int i = 0;i < count;i++){
		ans *= 10; 
    }
	return ans + smallOutput;
}

int stringToNumber(char input[]) {
    // Write your code here
	int len = length(input);
	return stringToNumberHelper(input,len - 1);
}




int main(){
	char input[50];
	cin >> input;
	cout << stringToNumber(input) << endl;
	cout << sizeof(stringToNumber(input)) << endl;
}