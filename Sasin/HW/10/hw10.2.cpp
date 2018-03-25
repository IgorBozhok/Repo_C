#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	int num;
	do {
		cout << "¬ведите число от 0 до 20" << endl;
		cin >> num;
	} while (num < 1 || num > 19);

	unsigned int composition = num;
	int num1 = num;

	for(int i = num ; i < 20 ; i++)
	{
		composition = composition * (num1 + 1);
		num1++;
	}
	cout << composition << endl;
	_getch();
	return;
}