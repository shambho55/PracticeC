#include <iostream>
using namespace std;

int length(char input[]){
	int count = 0;
	for(int i = 0;input[i] != '\0';i++){
		count++;
	}
	return count;
}

bool checkPalindromeHelper(char input[],int si,int ei){
	if(si >= ei){
		return true;
	}
	if(input[si] != input[ei]){
		return false;
	}
	return checkPalindromeHelper(input,si + 1,ei - 1);
}

bool checkPalindrome(char input[]){
	int len = length(input);
	return checkPalindromeHelper(input,0,len - 1);
}

int main(){
	char input[50];
	cin >> input;

	if(checkPalindrome(input)){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
}