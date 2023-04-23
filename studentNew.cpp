#include <iostream>
using namespace std;
#include "student.cpp"

int main(){
	Student s1;
	s1.setAge(25,123);
	s1.display();

	Student *s2 = new Student;
	s2 -> setAge(21,123);
	s2 -> display();

	Student s3(10);
	s3.display();

	Student *s4 = new Student(20,221);
	s4 -> display();

	Student s5(25,1002);
	cout << "Address of s5: " << &s5 << endl;
	cout << sizeof(s5) << endl;
	cout << sizeof(s4) << endl;
}