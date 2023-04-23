#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string inputStr,string outputStr){
	if(inputStr.length() == 0){
		return "";
	}
	if(inputStr[0] != inputStr[1]){
		outputStr += inputStr[0];
	}
	string strOut = removeDuplicates(inputStr + 1,outputStr);
	return outputStr + strOut;
}

void removeDuplicatesRecursively(char *input){
	string str = removeDuplicates(input,"");
	int i = 0;
	for(;i < input.length();i++){
		input[i] = str[i];
	}
	input[i] = '\0';
}


int main(){
	char s[10000];
	cin >> s;
	removeDuplicatesRecursively(s);
	cout << s << endl;
}