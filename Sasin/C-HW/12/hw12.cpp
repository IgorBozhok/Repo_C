#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//--- базовый класс с виртуальной функцией
template <typename dataType>
class rootsOfEquation
{
protected:
	dataType a;
	dataType b;
	dataType c;
	dataType d;
	dataType x;

public:
	rootsOfEquation();
	rootsOfEquation(dataType a, dataType b, dataType c, dataType d);
	virtual ~rootsOfEquation()
	{}
	virtual bool fideOfRoots() = 0;
	virtual void print(void) = 0;
};

template <typename dataType>
rootsOfEquation<dataType>::rootsOfEquation()
{
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	x = 0;
}
template <typename dataType>
rootsOfEquation<dataType>::rootsOfEquation(dataType a, dataType b, dataType c, dataType d)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
}


//--- класс линейных уравнений (ax+bx-c=d)
template <typename dataType>
class rootsOfLinearEquation : virtual public rootsOfEquation<dataType>
{
protected:
	virtual bool fideOfRoots();
public:
	rootsOfLinearEquation() = delete;
	rootsOfLinearEquation(dataType a, dataType b, dataType c, dataType d);
	virtual void print(void);
};

template <typename dataType>
rootsOfLinearEquation<dataType>::rootsOfLinearEquation(dataType a, dataType b, dataType c, dataType d)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
}
template <typename dataType>
bool rootsOfLinearEquation<dataType>::fideOfRoots()
{
	x = (d + c) / (a + b);
	return true;
}
template <typename dataType>
void rootsOfLinearEquation<dataType>::print(void)
{
	fideOfRoots();
	cout << "Linear equation (a*x + b*x - d = c)" << endl;
	cout << "a = " << a << " b = " << b << " c = " << c << " d= " << d << endl;
	cout << "Root Linear equation is x = " << x << endl;
}

//--- класс квадратных уравнений (ax*x+bx+c=0)
template <typename dataType>
class rootsOfQuadraticEquation : virtual public rootsOfEquation<dataType>
{
protected:
	dataType x1;
	dataType x2;
	virtual	bool fideOfRoots();
public:
	rootsOfQuadraticEquation() = delete;
	rootsOfQuadraticEquation(dataType a, dataType b, dataType c);
	virtual void print(void);
};

template <typename dataType>
rootsOfQuadraticEquation<dataType>::rootsOfQuadraticEquation(dataType a, dataType b, dataType c)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = 0;
	this->x1 = 0;
	this->x2 = 0;
}
template <typename dataType>
bool rootsOfQuadraticEquation<dataType>::fideOfRoots()
{
	if (a == 0)
	{
		if (b == 0)
		{
			return false;
		}
		else
		{
			x = c / b;
			return true;
		}
	}
	else
	{
		d = b * b - 4 * a * c;
		if (d < 0)
		{
			return false;
		}
		else
		{
			d = sqrt(d);
			x1 = (-b + d) / (2 * a);
			x2 = (-b - d) / (2 * a);
			return true;
		}
	}
}
template <typename dataType>
void  rootsOfQuadraticEquation<dataType>::print(void)
{

	cout << endl;
	cout << "Quadratic Equation (a*x2 + b*x + c = 0) "<< endl;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	
	if (fideOfRoots() == true)
	{
		if(x!=0)
		{
			cout << "Root QuadraticEquation is x = " << x << endl;
			return;
		}
		else
		{
			cout << "Roots QuadraticEquation is x1 = " << x1 << " and x2 = " << x2 << endl;
		}

	}
	else
	{
		cout << "QuadraticEquation no solutions" << endl;
	}
}

void main(void)
{
	rootsOfEquation<int> * objInt[2];
	rootsOfEquation<double> * objDouble[2];

	objInt[0] = new rootsOfLinearEquation<int>(1, 1, 6, 10);
	objInt[1] = new rootsOfQuadraticEquation<int>(4, 2, 55);

	objDouble[0] = new rootsOfLinearEquation<double>(1.1, 2.2, 3.3, 4.4);
	objDouble[1] = new rootsOfQuadraticEquation<double>(1.0, 6.0, 3.1);
	for (int i = 0; i < 2; i++)
	{
		objInt[i]->print();
		cout << endl;
		objDouble[i]->print();
		cout << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		delete objInt[i];
		delete objDouble[i];
	}
	
	system("pause");
	return;
}