#include <iostream>
using namespace std;

class Student{
public:
	char name;
	int rollNo;

	Student(int num){
		rollNo = num;
	}

	void print(){
		cout << name << " " << rollNo << endl; 
	}
};

int main(){
	Student *s = new Student(10);
	s -> name = 'A';
	s -> rollNo = 15;
	s -> print();
}