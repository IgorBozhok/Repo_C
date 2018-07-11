#include <iostream>
#include <string>

using namespace std;

class  figure
{
protected:
	double S;
	double P;
protected:
	virtual void calcS() = 0;
	virtual void calcP() = 0;
public:
	figure() = default;
	virtual void printS()
	{
		cout << "Figure S = " << S << endl;
	}
	virtual void printP()
	{
		cout << "Figure P = " << P << endl;
	}
	virtual ~figure()
	{

	}
};

class circle : public figure
{
private:
	const double pi = 3.14;
protected:
	double R;
	virtual void calcS() override
	{
		S = pi * R * R;
	}
	virtual void calcP() override
	{
		P = 2 * pi * R;
	}
public:
	circle() = delete;
	circle(double R) : R(R)
	{
		calcP();
		calcS();
	}
	virtual void printS() override
	{
		cout << "Circle S = " << S << endl;
	}
	virtual void printP() override
	{
		cout << "Circle P = " << P << endl;
	}
};

class square : virtual public figure
{
protected:
	double a;
	virtual void calcS()
	{
		S = a * a;
	}
	virtual void calcP()
	{
		P = 4 * a;
	}
public:
	square() = delete;

	square(double a) : a(a)
	{
		calcP();
		calcS();
	}
	virtual void printS() override
	{
		cout << "Square S = " << S << endl;
	}
	virtual void printP() override
	{
		cout << "Square P = " << P << endl;
	}
};

class rectangle : public square
{
protected:
	const double b;
	virtual void calcS() override
	{
		S = a * b;
	}
	virtual void calcP() override
	{
		P = 2 * (a + b);
	}
public:
	rectangle() = delete;
	rectangle(double b, double a) : b(b), square(a)
	{
		calcP();
		calcS();
	}
	virtual void printS() override
	{
		cout << "Rectangle S = " << S << endl;
	}
	virtual void printP() override
	{
		cout << "Rectangle P = " << P << endl;
	}
};

class triangle : virtual  public figure
{
private:
protected:
	 double a = 0;
	 double b = 0;
	 double c = 0;
	 double h = 0;
	virtual void calcS() override
	{
		S = a / 2 * h;
	}
	virtual void calcP() override
	{
		P = a + b + c;
	}
public:
	triangle() = delete;
	triangle(double a, double b, double c, double h) : a(a), b(b), c(c), h(h)
	{
		calcP();
		calcS();
	}
	triangle(double h) :h(h)
	{}

	virtual void printS()
	{
		cout << "Triangle S = " << S << endl;
	}
	virtual void printP()
	{
		cout << "Triangle P = " << P << endl;
	}
};


class trapeze : public triangle, public rectangle
{
private:
protected:
	double b1;
	double b2;
	virtual void calcS()
	{
		S = (rectangle::a + rectangle::b) / 2 * triangle::h;
	}
	virtual void calcP()
	{
		P = rectangle::a + rectangle::b + b1 + b2;
	}
public:
	trapeze() = delete;
	trapeze(double b1, double b2, double a, double b, double h) :b1(b1), b2(b2), rectangle(a, b) , triangle(h)
	{
		calcP();
		calcS();
	}
	virtual void printS() override
	{
		cout << "Trapeze S = " << S << endl;
	}
	virtual void printP() override
	{
		cout << "Trapeze P = " << P << endl;
	}
};


void main(void)
{
	figure *massF[4];
	massF[0] = new circle(3.2);
	massF[1] = new square(4.4);
	massF[2] = new rectangle(2, 4);
	massF[3] = new triangle(5, 3, 5, 4);
	massF[4] = new trapeze(2, 4, 5, 6, 7);


	massF[0]->printS();
	massF[1]->printS();
	massF[2]->printS();
	massF[3]->printS();
    massF[4]->printS();
	massF[0]->printP();
	massF[1]->printP();
	massF[2]->printP();
	massF[3]->printP();
	massF[4]->printP();

	delete massF[0];
	delete massF[1];
	delete massF[2];
	delete massF[3];
	delete massF[4];

	system("pause");
	return ;
}