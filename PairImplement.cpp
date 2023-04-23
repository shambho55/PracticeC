#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<pair<string,int>> vect;
	vect.push_back({"raam",546464});
	vect.push_back({"krishna",568696});
	vect.push_back({"shiv",5496876});
	cout << "phone-book" << endl;
	for(auto i : vect) cout << i.first << " " << i.second << endl;
}