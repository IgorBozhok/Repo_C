#include <stdio.h>
#include <conio.h>
#include <iostream>
#define X 9
using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	int num;
	while (true)
	{
		do
		{
			cout << "������� �����, ���� �� �������� , ������� ������� ����������� �� 1 �� 15." << endl;
			cin >> num;
		} while (num <= 0 || num >= 16);
		if (X != num)
		{
			cout << "�� �� �������, ���������� ���.  " << endl;
		}
		else if (X == num)
		{
			goto stop;
		}
	}
	stop: cout << "�� ������� �����" << endl;
	_getch();
	return;

}

