#include <iostream>
using namespace std;
#include "complexNumbers.cpp"

int main(){
	int real1,imaginery1;
	int real2,imaginery2;

	cin >> real1 >> imaginery1;
	cin >> real2 >> imaginery2;

	ComplexNumbers c1(real1,imaginery1);
	ComplexNumbers c2(real2,imaginery2);
	int choice;
	cin >> choice;

	c1.print();
	c2.print();
	if(choice == 1){
		cout << "After adding :" << endl;
		c1.add(c2);
		c1.print();
	}
	else if(choice == 2){
		cout << "After Multiply :" << endl;
		c1.multiply(c2);
		c1.print();
	}
	else{
		return 0;
	}
}