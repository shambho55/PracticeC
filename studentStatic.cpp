class Student{
	static int totalStudents;

public:
	int rollNumber;
	int age;
	// static functions can return only static properties
	int getRollNumber(){
		return rollNumber;
	}

	static int getTotalStudents(){
		return totalStudents;
	}
	static void setTotalStudents(int t){
		totalStudents = t;
	}
};

int Student :: totalStudents = 20;