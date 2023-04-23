#include <iostream>
#include <vector>
using namespace std;
int main(){

	vector <int> a;
	if(a.empty()){
		cout << "Yes Empty" << endl;
	}
	else{
		cout << "Not Empty" << endl;
	}

	vector <int> b(3);
	b[0] = 1;	
	b[1] = 2;
	b[2] = 3;

	cout << "Front Element " << b.front() << endl;
	cout << "Back Element " << b.back() << endl;

	for(int i = 0;i < 3;i++){
		cout << b[i] << " "; 
	}
	cout << endl;
	b.push_back(5);
	for(int i = 0;i < b.size();i++){
		cout << b[i] << " ";
	}
	cout << endl;
	b.pop_back();
	for(int i = 0;i < b.size();i++){
		cout << b[i] << " ";
	}
	cout << endl;
}
