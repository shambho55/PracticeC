#include <iostream>
#include <string>
using namespace std;

struct student{
	string name,phone_num;
	int roll_num,class_num;
	char section;
};

void printStudentDetails(student const &s){
	cout << s.name << " is a student of " << s.class_num << " " << s.section << " having roll number " << s.roll_num << " and phone_num " << s.phone_num << endl;
}

int main(){
	student s1;
	s1.name = "Raam";
	s1.phone_num = "25576546";
	s1.class_num = 12;
	s1.roll_num = 5;
	s1.section = 'B';

	printStudentDetails(s1);
}