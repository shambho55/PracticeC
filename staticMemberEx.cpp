#include <iostream>
using namespace std;		

class  Student{
public:
	int rollNumber;
	//static int rollNumber;

	static int getRollNumber(){
		return rollNumber;
	}
};
//int Student :: rollNumber = 21;
int main(){
	Student s;
	s.rollNumber = 101;
	cout << s.getRollNumber() << endl;
}