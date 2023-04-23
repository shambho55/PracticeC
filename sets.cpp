#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
	set<int> s;
	s.insert(1);
	s.insert(6);
	s.insert(3);
	s.insert(1);

	unordered_set<int> s1;
	s1.insert(1);
	s1.insert(6);
	s1.insert(3);
	s1.insert(1);

	cout << "size of set : " << s.size() << endl;
	cout << "size of unordered_set : " << s1.size() << endl;
	//cout << "begin on set : " << s.begin() << " " /*<< "begin  element " << *s.begin() <<*/ endl;
	//cout << "end on set : " << s.end() << " " /*<< "end element " << *s.end() <<*/ endl;

	if(!s.empty()) cout << "set is not empty" << endl;
	else cout << "set is empty" << endl;

	if(s.count(2) == 0) cout << "set does not contain 2." << endl;
	else cout << "set contains 2." << endl;

	if(s.count(6) == 0) cout << "set does not contain 6." << endl;
	else cout << "set contains 6." << endl;

	s.erase(s.begin());
	if(s.count(1) == 0) cout << "set does not contain 1." << endl;
	else cout << "set contains 1." << endl;

	s.insert(1);

	s.erase(s.find(3));

	if(s.count(3) == 0) cout << "set does not contain 3." << endl;
	else cout << "set contains 3." << endl;

	s.clear();

	cout << "size of set : " << s.size() << endl;

	if(!s1.empty()) cout << "unordered set is not empty" << endl;
	else cout << "unordered set is empty" << endl;

	if(s1.count(2) == 0) cout << "unordered set does not contain 2." << endl;
	else cout << "unordered set contains 2." << endl;

	if(s1.count(6) == 0) cout << "unordered set does not contain 6." << endl;
	else cout << "unordered set contains 6." << endl;

	s1.erase(s1.begin());
	if(s1.count(1) == 0) cout << "unordered set does not contain 1." << endl;
	else cout << "unordered set contains 1." << endl;

	s1.insert(1);

	s1.erase(s1.find(3));

	if(s1.count(3) == 0) cout << "unordered set does not contain 3." << endl;
	else cout << "unordered set contains 3." << endl;

	s1.clear();

	cout << "size of unordered set : " << s1.size() << endl;
}