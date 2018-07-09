#include <iostream>
#include <cassert>

using namespace std;

class  figure
{
protected:
	double S;
	double P;
public:
	figure() :S(0.0), P(0.0)
	{}
	void printS(void)
	{
		cout << "S = " << S << endl;
	}
	void printP(void)
	{
		cout << "P = " << P << endl;
	}
};
class circle:public figure
{
private:
	const double pi = 3.14;
protected:
	double R;
public:
	circle():R(0), figure()
	{}
	circle(double R)
	{
		this->R = R;
		S = pi *R*R;
		P = 2 * pi*R;
	}
};
class square :public figure
{
private:
protected:
	double A;
public:
	square() :A(0), figure()
	{}
	square(double A)
	{
		this->A = A;
		S = A*A;
		P = 4*A;
	}
};
class CinS:public circle, public square
{
private:
	const double pi = 3.14;
	bool isCorrect()
	{
		if (A == (2 * R))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
protected:
	bool correct;
public:
	CinS() = delete;
	CinS(double R, double A) :circle(R), square(A)
	{
		correct = isCorrect();
		square::S = A * A;
		square::P = 4 * A;
		circle::S = pi * R*R;
		circle::P = 2 * pi * R;
	}
	void print(void)
	{
		cout << "sqqare: " << endl;
		square::printS();
		square::printP();
		cout << "circle: " << endl;
		circle::printS();
		circle::printP();
		if (correct)
		{
			cout << "CinS is correct" << endl;
		}
		else
		{
			cout << "CinS is not correct" << endl;
		}
	}
};



void main(void)
{
	CinS obj(3,6);
	obj.print();

	system("pause");
	return;
}