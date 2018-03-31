#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	srand((unsigned int)time(NULL));
	int mass[5][5];
	for (int i= 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mass[i][j] = rand() % 201 -100;  
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mass[i][j] <<" ";
		}
		cout << endl;
	}

	int min = mass[0][0];
	int minplus=mass[0][0];

	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (mass[i][j] > 0 && minplus > mass[i][j])
			{
					minplus = mass[i][j];
			}

			else if (min > mass[i][j])
			{
				min = mass[i][j];
			}
		}
	}
	cout << minplus;
	cout << endl;
	cout << min;
	_getch();
	return;
}