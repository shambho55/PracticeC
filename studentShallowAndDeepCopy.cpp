class Student{
	int age;

public:
	char *name;
	Student(int age,char *name){
		this -> age = age;
		//  Shallow Copy
		//this -> name = name;
		// Shallow copy should be avoided because it copies the address of zeroth element of array rather than whole array
		// Deep Copy is copying an entire array to a new array
		this -> name = new char[strlen(name) + 1];
		strcpy(this -> name,name);
		// Deallocating Dynamic memory will delete all filled data 
		//delete [] this -> name;
	}

	Student(Student const &s){
		this -> age = s.age;
		// Shallow Copy
		//this -> name = s.name;
		// Deep Copy
		this -> name = new char[strlen(s.name) + 1];
		strcpy(this -> name,s.name);
	}
	void display(){
		cout << this -> name << " " << this -> age << endl;
	}
};