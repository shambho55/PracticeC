#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cin >> str;
	//getline(cin,str);

	str.push_back('a');
	cout << "Length Before : " << str.size() << endl;
	cout << "string after Appending : " << str << endl;
	str.pop_back();
	cout << "Length After : " << str.size() << endl;
	cout << "string after popping : " << str << endl;

	cout << str.substr(0,0) << endl;
	cout << str.substr(1,5) << endl;
	cout << str.substr(2,4) << endl;
	cout << str.substr(5,5) << endl;


}