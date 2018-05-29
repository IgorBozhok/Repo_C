
#include <iostream>
#include <conio.h>

using namespace std;

class myInt1
{
private:
	char c;
public:
	void inputIntI(void);
	void outputIntI(void);
	void incrIntIuP(void);
	void incrIntIDoun(void);
};
void myInt1::inputIntI(void)
{
	cout << "Enter Char c: ";
	cin >> c;
}
void myInt1::outputIntI(void)
{
	cout << "Char c = " << c;
	cout << endl;
}
void myInt1::incrIntIuP(void)
{
	c = c - 32;
}
void myInt1::incrIntIDoun(void)
{
	c = c + 32;
}

void _switch(int cho, myInt1& obj);

void main(void)
{
	
	myInt1 obj;
	int cho;
	cout << "1: up" << endl;
	cout << "2: doun" << endl;
	cin >> cho;
	_switch(cho,obj);
	system("pause");
	return;
}

void _switch(int cho, myInt1& obj)
{
	switch (cho)
	{
	case 1:
	{
		obj.inputIntI();
		obj.incrIntIuP();
		obj.outputIntI();
		break;
	}
	case 2:
	{
		obj.inputIntI();
		obj.incrIntIDoun();
		obj.outputIntI();
		break;
	}
	}
	return;
}

/*
#include <iostream>
using namespace std;

#define debug 1

class drop
{
	private:
		int x;
		int y;
	public:
		void setX(int set)
		{
			x = set;
		}
		int getX(void)
		{
			return x;
		}
		void setY(int set)
		{
			y = set;
		}
		int getY(void)
		{
			return y;
		}


};
class rectangle
{
	private:
		drop A, B, C, D; // вершины
		int AB; // длины
		int AD; // ширина
		int S; // S

	private:
		void initB(void)
		{
			B.setX(C.getX());
			B.setY(A.getY());
			
		}
		void initD(void)
		{
			D.setX(A.getX());
			D.setY(C.getY());
		}
		void initAB(void)
		{
			AB = B.getX() - A.getX();
			if (AB < 0)
			{
				AB *= -1;
			}
		}
		void initAD(void)
		{
			AD = A.getY() - D.getY();
			if (AD < 0)
			{
				AD *= -1;
			}
		}
		void initS(void)
		{
			S = AB*AD;
#ifdef debug
			if (S < 0)
			{
				cout << "S error" << endl;
				system("pause");
			}
#endif
		}


	public:
		void initRect(int Ax, int Ay, int Cx, int Cy)
		{
			A.setX(Ax);
			A.setY(Ay);
			C.setX(Cx);
			C.setY(Cy);
			initB();
			initD();
			initAB();
			initAD();
			initS();
		}
		int getAB(void)
		{
			return AB;
		}
		int  getAD(void)
		{
			return AD;
		}
		int getS(void)
		{
			return S;
		}
	


};

void inputRec(rectangle &rect)

{
	int x1, x2, y1, y2;
	x1 = x2 = y1 = y2 = 0;

	cout << "Enter A" << endl;
	cout << "x = ";
	cin >> x1;
	cout << "y = ";
	cin >> y1;

	cout << "Enter C" << endl;
	cout << "x = ";
	cin >> x2;
	cout << "y = ";
	cin >> y2;
	rect.initRect(x1, y1, x2, y2);
}
void main(void)
{
	rectangle rect1, rect2;
	inputRec(rect1);
	inputRec(rect2);
	if (rect1.getS() > rect2.getS())
	{
		cout << "S1 = " << rect1.getS();
		cout << endl;
		cout << "S2 = " << rect1.getS();
		
	}
	else
	{
		cout << "S2 = " << rect1.getS();
		cout << endl;
		cout << "S1 = " << rect1.getS();
		
	}
	system("pause");
	return;
}
*/
