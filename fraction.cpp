
class Fraction{
private:
	int numerator;
	int denominator;
public:

	Fraction(int numerator,int denominator){
		this -> numerator = numerator;
		this -> denominator = denominator;
	}
	// Syntax for writing const is mandatory as shown
	int getNumerator() const{
		return numerator;
	}

	int getDenominator() const{
		return denominator;
	}

	void setNumerator(int num){
		numerator = num;
	}

	void setDenominator(int deno){
		denominator = deno;
	}
	void print() const{
		cout << this -> numerator << " / " << denominator << endl;
	}

	void simplify(){
		int gcd = 1;
		int j = min(numerator,denominator);
		for(int i = 1;i <= j;i++){
			if((this -> numerator % i == 0) && (this -> denominator % i == 0)){
				gcd = i;
			}
		}
		numerator = (numerator / gcd);
		denominator = (denominator / gcd);
	}

	// void add(Fraction const &f2){
	// 	int lcm = denominator * f2.denominator;
	// 	int x = (lcm / denominator) * numerator;
	// 	int y = (lcm / f2.denominator) * f2.numerator;

	// 	numerator = x + y;
	// 	denominator = lcm;

	// 	simplify();
	// }

	Fraction const add(Fraction const &f2){
		int lcm = denominator * f2.denominator;
		int x = (lcm / denominator) * numerator;
		int y = (lcm / f2.denominator) * f2.numerator;

		int num = x + y;
		int deno = lcm;

		Fraction fNew(num,deno);
		fNew.simplify();
		return fNew;
	}

	Fraction const operator+(Fraction const &f2){
		int lcm = denominator * f2.denominator;
		int x = (lcm / denominator) * numerator;
		int y = (lcm / f2.denominator) * f2.numerator;

		int num = x + y;
		int deno = lcm;

		Fraction fNew(num,deno);
		fNew.simplify();
		return fNew;
	}

	bool operator==(Fraction const &f2){
		return (numerator == f2.numerator && denominator == f2.denominator);
	}

	void multiply(Fraction const &f2){
		numerator = (numerator * f2.numerator);
		denominator = (denominator * f2.denominator);

		simplify();
	}

	Fraction const operator*(Fraction const &f2){
		int num = (numerator * f2.numerator);
		int deno = (denominator * f2.denominator);

		Fraction fNew(num,deno);
		fNew.simplify();
		return fNew;
	}
	//Pre Increment
	Fraction &operator++ () {
		numerator = numerator + denominator;
		simplify();
		return (*this);
	}

	// Post Increment
	Fraction operator++(int){
		Fraction fNew(numerator,denominator);
		numerator = numerator + denominator;
		simplify();
		fNew.simplify();
		return fNew;
	}

	// += operator
	Fraction& operator+=(Fraction const &f2){
		int lcm = denominator * f2.denominator;
		int x = lcm / denominator;
		int y = lcm / f2.denominator;

		numerator = (x * numerator) + (y * f2.numerator);
		denominator = lcm;
		simplify();
		return *this; 
	}

};