#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque <int> dq;
	cout << "current size is " << dq.size() << endl;

	if(dq.empty()){
		cout << "Yes Empty" << endl;
	}
	dq.push_back(5);
	dq.push_back(8);
	dq.push_back(9);

	while(!dq.empty()){
		cout << "current elements is " << dq.front() << endl;
		dq.pop_front();
	}
	cout << "current size is " << dq.size() << endl;

	dq.push_front(1);
	dq.push_front(2);
	dq.push_front(3);

	cout << "current size is " << dq.size() << endl;

	while(!dq.empty()){
		cout << "current element is " << dq.back() << endl;
		dq.pop_back();
	}

}