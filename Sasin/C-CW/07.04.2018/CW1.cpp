#include <iostream>
#include <cassert>


using namespace std;

class figure
{
private:
protected:
	double P;
	double S;
public:
	figure():S(0),P(0)
	{}
	~figure()
	{}
	void printS() const
	{
		cout << "S = " << S << endl;
	}
	void printP() const
	{
		cout << "P = " << P << endl;
	}
};

class circle:public figure
{
private:
	const double _pi = 3.14;
	void calcCircleP(void)
	{
		P = 2 * _pi*R;
	}
	void calcCircleS(void)
	{
		S = _pi*R*R;
	}
protected:
	double R;
public:
	circle() = delete;
	circle(double R):R(R)
	{
		calcCircleP();
		calcCircleS();
	}
	~circle()
	{}
	void SetR(double R)
	{
		this->R = R;
		calcCircleP();
		calcCircleS();
	}
	 
};

class square : public figure
{
private:
	void calcSquareP(void)
	{
		P = 4 * a;
	}
	void calcSquareS(void)
	{
		S = a * a;
	}
protected:
	double a;
public:
	square() = delete;
	square(double a) :a(a)
	{
		calcSquareP();
		calcSquareS();
	}
	~square()
	{}
	void SetA(double a)
	{
		this->a = a;
		calcSquareP();
		calcSquareS();
	}
};

class rectangle:public square
{
private:
	void clacRectangleP(void)
	{
		P = 2 * (a + b);
	}
	void clacRectangleS(void)
	{
		S = a * b; 
	}

protected:
	double b;
public:
	rectangle() = delete;
	rectangle(double a, double b) :square(a), b(b)
	{
		clacRectangleP();
		clacRectangleS();
	}
	~rectangle()
	{

	}
	void SetA(double a)
	{
		this->a = a;
		clacRectangleP();
		clacRectangleS();
	}
	void SetB(double b)
	{
		this->b = b;
		clacRectangleP();
		clacRectangleS();
	}
};


void main(void)
{
	
	circle objCircle(5);
	{
		cout << "class Circle / start" << endl;
		objCircle.printP();
		objCircle.printS();
		cout << endl;
		objCircle.SetR(10);
		objCircle.printP();
		objCircle.printS();
		cout << "class Circle / finish" << endl;
	}

	square objSquare(5);
	{
		cout << "class Square / start" << endl;
		objSquare.printP();
		objSquare.printS();
		cout << endl;
		objSquare.SetA(10);
		objSquare.printP();
		objSquare.printS();
		cout << "class Square / finish" << endl;
	}

	rectangle objRectangle(10, 5);
	{
		cout << "class Rectangle / start" << endl;
		objRectangle.printP();
		objRectangle.printS();
		cout << endl;
		objRectangle.SetA(2);
		objRectangle.SetB(10);
		objRectangle.printP();
		objRectangle.printS();
		cout << "class Rectangle / finish" << endl;
	}
	system("pause");
	return;
}