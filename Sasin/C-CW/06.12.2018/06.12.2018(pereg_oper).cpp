#include <iostream>

using namespace std;

class complex
{
private:
	int R;
	int I;
public:
	complex():R(0),I(0) {}
	complex(int R,int I):R(R), I(I) {}
	complex(const complex& from)
	{
		this->R = from.R;
		this->I = from.I;
	}
	~complex(){}
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
		int resR = this->R + right.R;
		int ResI = this->I + right.I;
		complex result(resR, ResI);
		return result;
	}
	complex operator-(const complex &right) const
	{
		int resR = this->R - right.R;
		int ResI = this->I - right.I;
		complex result(resR, ResI);
		return result;
	}
	complex operator++(int)
	{
		complex oldComplex(*this);
		this->R++;
		this->I++;
		return oldComplex;
	}
	complex& operator++()
	{
		this->R++;
		this->I++;
		return *this;
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
	complex res, obj1(2, 3), objR(1, -1);
	obj1.print();
	objR.print();
	res = obj1 + objR;
	res.print();
	cout << endl;
	res = obj1 - objR;
	res.print();
	cout << endl;
	res = obj1++;
	obj1.print();
	res.print();
	res = ++obj1;
	res.print();
	system("pause");
	return;
}