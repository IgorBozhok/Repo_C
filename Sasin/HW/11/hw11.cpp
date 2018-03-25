#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	cout << "	Таблица умножения" << endl;
	cout << endl;
	int num;
	int c;
	do
	{
		cout << "Введите цисло от 1 до 10 : ";
		cin >> num;
		cout << endl;
	} while (num<=0 || num >=11);

	cout << "Через for" << endl;
	for (int i = 1; i < 11; i++)
	{
		c = num*i;
		cout << num << "*" << i << "=" << c << endl;
	}

	cout << endl;
	cout << "Через while" << endl;

	int i=1;
	while (i < 11)
	{
		{
			c = num*i;
			cout << num << "*" << i << "=" << c << endl;
			i++;
		}
	}
	_getch();
	return;

}