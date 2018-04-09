#include <iostream>
#include <conio.h>
#include <stdio.h>


using namespace std;
/*
struct newST
{
	int x = 0;
	int y = 0;
};

newST Fun(newST point1, newST& point2)
{
	newST res;
	res.x = point2.x - point1.x;
	res.y = point2.x - point1.y;

	point2.x == 2;
	point2.y == 2;
	return res;
}

void OutPutVec(newST* vector)
{
	cout << vector[1].x - vector[0].x << endl;
	cout << vector[1].y - vector[0].y << endl;
}
void main()
{
	newST point1, point2;
	point1.x = 2;
	point1.y = 3;
	point1.x = 5;
	point1.x = 1;

	newST* vector = new newST[2];
	vector[0].x = 7;
	vector[0].y = 3;
	vector[1].x = 5;
	vector[1].y = 6;
	point1 = Fun(point1, point2);
	// вывести point1 и point2
	OutPutVec(vector);
	_getch();
	return;
}*/

struct part 
{
	int num; // числитель
	int den; // знаменатель
	//int c; // целоя 
	int _signed; // знак
};



part Sum(part a, part b)
{
	
	part sum { 0,0, 1 }; // знак == '+' , -1 == '-'
		//if (a._signed == 1 || a._signed == -1)
		//if(b._signed == 1 || b._signed == -1)
		if (a.den == b.den)
		{
			sum.den = a.den;
			sum.num = a._signed * a.num  - b._signed*b.num;
			if (sum._signed>=0)
			{
				sum._signed = 1;
			}
			else
			{
				sum.num *= -1;
				sum._signed = -1;
			}
		}
		else
		{
			sum.den = a.den*b.den;
			a.num*=b.den;
			b.num *= a.den;
			sum.num = a._signed * a.num + b._signed*b.num;
			if (sum._signed >= 0)
			{
				sum._signed = 1;
			}
			else
			{
				sum.num *= -1;
				sum._signed = -1;
			}
		}
		return sum;
}

part Raz(part a, part b)
{

	part Raz{ 0,0, 1 }; // знак == '+' , -1 == '-'
						//if (a._signed == 1 || a._signed == -1)
						//if(b._signed == 1 || b._signed == -1)
	if (a.den == b.den)
	{
		Raz.den = a.den;
		Raz.num = a._signed * a.num - b._signed*b.num;
		if (Raz._signed >= 0)
		{
			Raz._signed = 1;
		}
		else
		{
			Raz.num *= -1;
			Raz._signed = -1;
		}
	}
	else
	{
		Raz.den = a.den*b.den;
		a.num *= b.den;
		b.num *= a.den;
		Raz.num = a._signed * a.num - b._signed*b.num;
		if (Raz._signed >= 0)
		{
			Raz._signed = 1;
		}
		else
		{
			Raz.num *= -1;
			Raz._signed = -1;
		}
	}
	return Raz;
}

part Umn(part a, part b)
{

	part Umn1 = { 0,0,1 };

		Umn1.den = a.den*b.den;
		Umn1.num = a.num*b.num*a._signed;
	
	return Umn1;
}


void main()
{
	
	part res = { 0,0,1 };
	part a = { 3,4,1 };
	part b = { 4,5,1 };

	/*res = Sum(a, b);
	if (res._signed == 1)
	{
		cout << res.num << "/" << res.den;
	}
	else
	{
		cout << "-" << endl;
		cout << res.num << "/" << res.den;
	}*/

	/*res = Raz(a, b);
	if (res._signed == 1)
	{
		cout << res.num << "/" << res.den;
	}
	else
	{
		cout << "-" << endl;
		cout << res.num << "/" << res.den;
	}
	*/
	res = Umn(a, b);
	_getch();
	return;
}
