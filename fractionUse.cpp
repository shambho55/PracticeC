#include <iostream>
using namespace std;	
#include "fraction.cpp"

int main(){	

	Fraction f1(10,2);
	f1.print();

	Fraction f2(10,4);
	f2.print();

	cout << "After adding :" << endl;
	f1.add(f2);
	f1.print();
	 
	cout << "After multiply :" << endl;
	
	f1.multiply(f2);
	f1.print();

	Fraction const f3(4,5);
	cout << f3.getNumerator() << " " << f3.getDenominator() << endl;

	cout << "After operator overloading : " << endl;
	Fraction f4(10,5);
	Fraction f5(15,4);

	Fraction f6 = f4.add(f5);
	f4.print();
	f5.print();
	f6.print();

	Fraction f7 = f6 + f4;
	f7.print();

	Fraction f8 = f6 * f4;
	f8.print();

	if(f8 == f6){
		cout << "Equal" << endl;
	}
	else {
		cout << "Not Equal" << endl;
	}

	cout << "After using ++ operator overloading : " << endl;

	Fraction f9(11,7);
	Fraction f10 = ++(++f9);
	f9.print();
	f10.print();
	cout << &f9 << endl;
	cout << &f10 << endl;

	cout << "After Post Increment : " << endl;

	Fraction f11(8,6);
	Fraction f12 = f11++;	
	f11.print();
	f12.print();

	cout << "After += operator : " << endl;

	Fraction f13(10,3);
	Fraction f14(5,2);	
	Fraction f15 = (f13 += f14) += f14;
	f13.print();
	f14.print();
	f15.print();
	
}