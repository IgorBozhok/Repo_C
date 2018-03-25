#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	int num;
	int a;
	do {
		cout << "¬ведите число до 499" << endl;
		cin >> num;
	} while (num >= 500);

	if (num < 0)
	{
		a =(num - 500)*-1;
	}
	else if (num >= 0)
	{
		a = 500 - num;
	}
	int summ = num; 
	int num1 = num;


	for(int i=0; i < a ; i++)
	{
		summ = summ + (num1 + 1);
		num1++;
	}
	cout << summ << endl;
	//for(int i = 0;)
	_getch();
	return;
}