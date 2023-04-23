#include <iostream>
using namespace std;
#include "studentStatic.cpp"

int main(){
	Student s1;
	s1.age = 20;
	s1.rollNumber = 101;
	//s1.totalStudents = 100;

	cout << "S1 : " << s1.age << " " << s1.rollNumber << " " << s1.getTotalStudents() << endl;
	Student s2;
	s2.age = 25;
	s2.rollNumber = 105;
	//s2.totalStudents = 100;
	s2.setTotalStudents(215);
	cout << "S2 : " << s2.age << " " << s2.rollNumber << " " << s2.getTotalStudents() << endl;
	cout << s1.getTotalStudents() << endl;
}