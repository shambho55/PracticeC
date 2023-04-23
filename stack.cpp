#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack <int> S;

	cout << "current size : " << S.size() << endl;

	S.push(5);
	S.push(8);
	S.push(9);

	cout << "current size : " << S.size() << endl;

	cout << "Top element : " << S.top() << endl;	

	while(!S.empty()){
		cout << "current top Element : " << S.top() << endl;
		S.pop();
		cout << "current size is " << S.size() << endl;
	}
}