#include <iostream>
using namespace std;
#include "student.cpp"

int main(){
	// Create Statically
	Student s1;
	Student s2;

	Student s3, s4, s5;

	s1.rollNumber = 101;
	//s1.Age = 24;

	cout << "S1 rollNumber: " << s1.rollNumber << endl;
	cout << "S1 age: " << s1.getAge() << endl;
	s1.display();
	// Create Dynamically
	Student *s6 = new Student;

	(*s6).rollNumber = 105;
	//(*s6).Age = 25;

	cout << "S6 rollNumber: " << (*s6).rollNumber << endl;
	cout << "S6 Age: " << (*s6).getAge() << endl;

	s6 -> display();
	s6 -> rollNumber = 205;
	//s6 -> Age = 21;

	cout << s6 -> rollNumber << endl;
	cout << s6 -> getAge() << endl;
 
}