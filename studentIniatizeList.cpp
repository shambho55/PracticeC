class Student{
public:
	int age;
	int const rollNumber;
	int &x;
	// Initialization List should be used
	// Reference As well as const Variable can be initialized with this list
	Student(int r,int age) : rollNumber(r),age(age),x(this -> age){
		//rollNumber = r;
	}
};