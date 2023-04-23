class Student{
public:
	int rollNumber;
private:
	int age;
public:
	//Default Constructor
	Student(){
		cout << "Default Constructor called !" << endl;
	}
	~Student(){
		cout << "Destructor Called!" << endl;
	}
	// this keyword is a pointer variable which stores address of current object
	// Parametrized Constructor
	Student(int rollNumber){
		cout << "Parametrized Constructor 1 called!" << endl;
		this -> rollNumber = rollNumber;
	}
	Student(int a,int r){
		cout << "Parametrized Constructor 2 called!" << endl;
		cout << "this pointer variable : " << this << endl;
		this -> age = a;
		this -> rollNumber = r;
	}



	void display(){
		cout << age << " " << rollNumber << endl;
	}
	int getAge(){
		return age;
	}
	void setAge(int a,int password){
		if(password != 123){
			return;
		}
		if(a < 0){
			return;
		}
		age = a;
	}
};