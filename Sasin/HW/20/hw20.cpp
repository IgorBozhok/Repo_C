#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

bool f1(int a)
{
	if (a > 0)
	{
		return true;
	}
	else if (a < 0)
	{
		return false;
	}
	else
		return a;
}

bool f2(int a)
{
	if (a/1==a || a/a==1)
	{
		return true;
	}
	else
		return false;
}


double cub(double a)
{
	double cub;
	cub = a*a*a;
		return cub;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	cout << "������� 1: �������� �������, ������� ���������� �������, ���� ���������� �� �������� �������������, ������ � ���� �������������." << endl;
	cout << "������� 2: �������� �������, ������� ���������� ��� ����������� �� �������� �����." << endl;
	cout << "��� ����� : ";
	int num;
	cin >> num;
	switch (num)
	{
	case 1:
	{
		int res;
		int a;
		cout << "������� ����� : ";
		cin >> a;
		res = f1(a);
		cout << res;
		break;
	}
	case 2:
	{
		double a;
		double res;
		cout << "������� ����� : ";
		cin >> a;
		res = cub(a);
		cout << res;
		break;

	}
	}
	_getch();
	return;
}