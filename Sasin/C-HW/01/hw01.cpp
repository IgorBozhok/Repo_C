#include <iostream>

using namespace std;

class fraction
{
private:
	int numerator;
	int denominator;
	char sign;
public:
	fraction()
	{
		numerator=0;
		denominator=0;
		sign = '/';
	}
	void setNum(int _numerator)
	{
		numerator = _numerator;
	}
	int getNum()
	{
		return numerator;
	}
	void setDenom(int _denominator)
	{
		denominator = _denominator;
	}
	int getDenom()
	{
		return denominator;
	}
	char getSing()
	{
		return sign;
	}
	void initFract(int _num, int _domen)
	{
		setNum(_num);
		setDenom(_domen);
	}
};
class operations
{
private:
	fraction first, second, resFirst, resSecond, res;
public:
	operations(fraction _first, fraction _second)
	{
		first.setNum(_first.getNum());
		first.setDenom(_first.getDenom());
		second.setNum(_second.getNum());
		second.setDenom(_second.getDenom());
	}
	void addition(void);
	void subtraction(void);
	void multiplication(void);
	void division(void);
};
void operations::addition(void)
{
	if (first.getDenom() != second.getDenom())
	{
		resFirst.setNum(first.getNum()*second.getDenom());
		resSecond.setNum(second.getNum()*first.getDenom());
		res.setNum(resFirst.getNum() + resSecond.getNum());
		res.setDenom(first.getDenom()*second.getDenom());
		cout << res.getNum() << res.getSing() << res.getDenom() << endl;
	}
	else
	{
		resFirst.setNum(first.getNum());
		resSecond.setNum(second.getNum());
		res.setDenom(first.getDenom());
		res.setNum(resFirst.getNum() + resSecond.getNum());
		cout << res.getNum() << res.getSing() << res.getDenom() << endl;
	}
}

void operations::subtraction(void)
{
	if (first.getDenom() != second.getDenom())
	{
		resFirst.setNum(first.getNum()*second.getDenom());
		resSecond.setNum(second.getNum()*first.getDenom());
		res.setNum(resFirst.getNum() - resSecond.getNum());
		res.setDenom(first.getDenom()*second.getDenom());
		cout << res.getNum() << res.getSing() << res.getDenom() << endl;
	}
	else
	{
		resFirst.setNum(first.getNum());
		resSecond.setNum(second.getNum());
		res.setDenom(first.getDenom());
		res.setNum(resFirst.getNum() - resSecond.getNum());
		cout << res.getNum() << res.getSing() << res.getDenom() << endl;
	}
}
void operations::multiplication(void)
{
	res.setNum(first.getNum() * second.getNum());
	res.setDenom(first.getDenom() * second.getDenom());
	cout << res.getNum() << res.getSing() << res.getDenom() << endl;
}

void operations::division(void)
{
	res.setNum(first.getNum() * second.getDenom());
	res.setDenom(first.getDenom()* second.getNum());
	cout << res.getNum() << res.getSing() << res.getDenom() << endl;
}

void initFraction(fraction &obj);
void outFraction(fraction obj);
void _swich(operations obj3);

void main()
{
	setlocale(LC_ALL, "RUS");
	fraction obj,obj1;
	cout << "Введите 1 дробь: "<<endl;
	initFraction(obj);
	cout << "Введите 2 дробь: "<<endl;
	initFraction(obj1);
	cout << "1 дробь: ";
	outFraction(obj);
	cout << "2 дробь: ";
	outFraction(obj1);
	cout << endl;
	operations obj3(obj, obj1);
	_swich(obj3);
	system("pause");
	return;
}

void initFraction(fraction &obj)
{
	int _num = 0;
	int _den = 0;
	cout << "Введите числитель: ";
	cin >> _num;
	while (_den == 0)
	{
		cout << "Введите знаменатель: ";
		cin >> _den;
	}
	obj.initFract(_num, _den);
	return;
}
void outFraction(fraction obj)
{
	cout << obj.getNum() << obj.getSing() << obj.getDenom()<< endl;
}
void _swich(operations obj)
{
	int cho = 1;


	while (cho !=5)
	{ 
		cout << "1) Cложение." << endl;
		cout << "2) Вычитание." << endl;
		cout << "3) Умножение." << endl;
		cout << "4) Деление." << endl;
		cout << "5) Выход." << endl;
		cin >> cho;

		switch (cho)
		{
		case 1:
		{
			obj.addition();
			system("pause");
			break;
		}
		case 2:
		{
			obj.subtraction();
			system("pause");
			break;
		}
		case 3:
		{
			obj.multiplication();
			system("pause");
			break;
		}
		case 4:
		{
			obj.division();
			system("pause");
			break;
		}
		case 0:
		{
			return;
		}
		}
	}
}
