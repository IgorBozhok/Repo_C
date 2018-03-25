#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	int c = 0;
	for (int i = 1; i < 11; i++)
	{
		cout << endl;
		for (int j = 1; j < 11; j++)
		{
			int c = 0;
			c = i * j;
			cout << i << "*" << j << "=" << c << endl;
		}
	}
	_getch();
	return;
}