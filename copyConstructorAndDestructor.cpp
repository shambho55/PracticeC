#include <iostream>
using namespace std;
#include "student.cpp"

int main(){
	Student s1(10,1001);
	cout << "S1 :";
	s1.display();

	// Copy constructor is called
	Student s2(s1);
	cout << "S2 :";
	s2.display();

	Student *s3 = new Student(20,2002);
	s3 -> display();

	Student s4(*s3);
	s4.display();

	Student *s5 = new Student(*s3);
	Student *s6 = new Student(s1);

	cout << "s5 : " ;
	s5 -> display();
	cout << "s6 : " ;
	s6 -> display();

	// Copy Assigment Operator

	Student s7(50,5001);
	Student *s8 = new Student();
	cout << "Copy Assignment Operator : " << endl;
	s7.display();
	s8 -> display();

	*s8 = s7;

	s7.display();
	s8 -> display();

	// Destructor

	delete s3;
	delete s5;
	delete s6;
	delete s8;

	Student s9; // Default Constructor
	cout << "S9 : ";
	s9.display();
	Student s10(10); // Parametrized Constructor 1
	cout << "S10 : ";
	s10.display();
	Student s11(11,121); // Parametrized Constructor 2
	cout << "S11 : ";
	s11.display();
	Student s13(s10); // copy constructor
	cout << "S13 : ";
	s13.display();
	s9 = s11; // copy Assignment operator
	cout << "S9 : ";
	s9.display();
	Student s12 = s11; // Copy Constructor
	cout << "S12 : " ;
	s12.display();

}