#include <iostream>

using namespace std;

class complex
{
private:
	double R;
	double I;
public:
	complex() :R(0), I(0) {}
	complex(double R, double I) :R(R), I(I) {}
	complex(const complex& from)
	{
		this->R = from.R;
		this->I = from.I;
	}
	~complex() {}
	void print() const
	{
		cout << R;
		if (I < 0)
		{
			cout << I << "i" << endl;
		}
		else
		{
			cout << "+" << I << "i" << endl;
		}
	}
	
	complex operator+(const complex& right) const
	{
		double resR = this->R + right.R;
		double ResI = this->I + right.I;
		complex result(resR, ResI);
		return result;
	}
	complex operator-(const complex &right) const
	{
		double resR = this->R - right.R;
		double ResI = this->I - right.I;
		complex result(resR, ResI);
		return result;
	}
	complex operator*(const complex &right) const
	{
		double resR = this->R * right.R;
		double ResI = this->I * right.I;
		complex result(resR, ResI);
		return result;
	}
	complex operator/(const complex &right) const
	{
		double resR = this->R / right.R;
		double ResI = this->I / right.I;
		complex result(resR, ResI);
		return result;
	}

	complex& operator=(const complex &right)
	{
		this->R = right.R;
		this->I = right.I;
		return *this;
	}
};



void main(void)
{
	complex resPlus, resDeff, resMul, resDivision, objL(2, 3), objR(1, -2);
	objL.print();
	objR.print();
	cout << endl;

	resPlus = objL + objR;
	cout << "Plus: ";
	resPlus.print();
	cout << endl;

	cout << "Difference: ";
	resDeff = objL - objR;
	resDeff.print();
	cout << endl;

	resMul = objL * objR;
	cout << "Multiplication: ";
	resMul.print();
	cout << endl;

	resDivision = objL / objR;
	cout << "Division: ";
	resDivision.print();

	system("pause");
	return;
}