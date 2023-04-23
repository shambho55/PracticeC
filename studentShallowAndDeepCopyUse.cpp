#include <iostream>
using namespace std;	
#include <cstring>
#include "studentShallowAndDeepCopy.cpp"

int main(){

	char name[] = "abcd";
	Student s1(20,name);

	s1.display();

	name[3] = 'e';
	Student s2(25,name);

	s1.display();
	s2.display();

	cout << "Using copy Constructor : " << endl;
	
	name[0] = 'x';

	Student s3(22,name);	
	Student s4(s3);
	s3.name[1] = 'i';
	s3.display();
	s4.display();
}
