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
			cout << "Ввидите цифру, пока не угадаете , которую загадал программист от 1 до 15." << endl;
			cin >> num;
		} while (num <= 0 || num >= 16);
		if (X != num)
		{
			cout << "Вы не угадали, попробуйте еще.  " << endl;
		}
		else if (X == num)
		{
			goto stop;
		}
	}
	stop: cout << "Вы угадали число" << endl;
	_getch();
	return;

}

