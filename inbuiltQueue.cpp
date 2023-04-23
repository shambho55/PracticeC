#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue <int> q;
	if(q.empty()){
		cout << "Yes Empty Queue" << endl;
	}
	cout << "current size : " << q.size() << endl;
	q.push(5);
	q.push(8);
	q.push(9);
	cout << "front Element : " << q.front() << endl;
	cout << "Back Element : " << q.back() << endl;

	cout << "top Element : " << q.front() << endl;

	while(!q.empty()){
		cout << "current Element is " << q.front() << endl;
		q.pop();
 	}

 	cout << "current size is " << q.size() << endl;

 	q.push(1);
 	q.push(2);
 	q.push(3);

 	cout << "current size : " << q.size() << endl;
 	while(!q.empty()){
 		cout << "current Element is " << q.back() << endl;
 		q.pop();
 	}
 	cout << "current size is " << q.size() << endl;
}