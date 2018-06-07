#include <iostream>
#include <conio.h>

using namespace std;

class fraction
{
private:
	int sign;
	unsigned int numerator;
	unsigned int demoninator;
	char c = '/';
public:
	fraction()
	{
		sign = numerator = demoninator = 1;
	}
	fraction(int sign, unsigned int numerator, unsigned int demoninator)
	{
		this->sign = sign;
		this->numerator = numerator;
		this->demoninator = demoninator;
	}
	fraction(const fraction &from)
	{
		this->sign = from.sign;
		this->numerator = from.numerator;
		this->demoninator = from.demoninator;
	}
	void sum(const fraction &objB)
	{
		
		this->numerator = (this->numerator* objB.demoninator) + (objB.numerator * this->demoninator);
		this->demoninator *= objB.demoninator;
	}

	fraction operator+(const fraction &objB)
	{
		int tempNum = this->numerator+objB.numerator;
		int temDen = this->demoninator+objB.demoninator;
		int tempS = this->sign*objB.sign;

		return fraction(tempS, tempNum, temDen);
	}

	fraction& operator=(const fraction &objB)
	{
		this->sign = objB.sign;
		this->numerator = objB.numerator;
		this->demoninator = objB.demoninator;
		return *this;
	}

	void sub(const fraction &objB)
	{
		this->numerator = (this->numerator* objB.demoninator) - (objB.numerator * this->demoninator);
		this->demoninator *= objB.demoninator;
	}
	~fraction() {}

	void print(void) const
	{
		cout << numerator << c << demoninator << endl;
	}

};

void main()
{
	fraction a(1,4,5);
	fraction b(1, 3, 7);
	fraction res;
	res = a + b;
	res.print();


	system("pause");
	return;
}