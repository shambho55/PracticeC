class ComplexNumbers{
private:
	int real;
	int imaginery;
public:

	ComplexNumbers(int real,int imaginery){
		this -> real = real;
		this -> imaginery = imaginery;
	}

	void print(){
		cout << this -> real << ' ' << '+' << ' ' << 'i' << this -> imaginery << endl;
	}

	void add(ComplexNumbers const &c2){
		real = real + c2.real;
		imaginery = imaginery + c2.imaginery;
	}

	void multiply(ComplexNumbers const &c2){
		int r = (real * c2.real) + ((-1)*(imaginery * c2.imaginery));
		int i = (imaginery * c2.real) + (real * c2.imaginery);

		real = r;
		imaginery = i;
	}
};