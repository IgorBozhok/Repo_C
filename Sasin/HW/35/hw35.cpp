#include <stdio.h>
#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;

int *CreateMass1(int Col)
{
	int *mass1;
	mass1 = new int[Col];
	return mass1;
}
int **CreateMass2(int Col, int Row)
{
	int **mass2;
	mass2 = new int*[Row];
	for (int i = 0; i < Row; i++)
	{
		mass2[i] = new int[Col];
	}
	return mass2;
}
void RandMass(int* mass, int A)
{
	for (int i = 0; i < A; i++)
	{
			mass[i] = rand() % 10;
			cout << mass[i] << " ";
	}
}
void tranMass1in2(int *mass, int **Mass2, int Col, int Col2, int Row2)
{
	int i, j;
	int count = 0;

	for (i = 0; i < Col2; i++)
	{
		for (j = 0; j < Row2; j++)
		{
			if (count < Col)
			{
				Mass2[i][j] = mass[count];
				count++;
			}
			else if (count >= Col)
			{
				Mass2[i][j] = 0;
				count++;
			}
		}
	}
}
void OutMass2(int **mass2, int Row2, int Col2)
{
	for (int i = 0; i < Row2; i++)
	{
		for (int j = 0; j < Col2; j++)
		{
			cout << mass2[i][j] << " ";
		}
		cout << endl;
	}
}
void DelMass1(int *mass)
{
	delete[]mass;
}
void DelMass2(int **mass2, int Col)
{
	for (int i = 0; i < Col; i++)
	{
		delete[]mass2[i];
	}
	delete[]mass2;
}
void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(nullptr));
	int Col;
	Cl: cout << "¬ведите размер масива." << endl;
	cin >> Col;
	if (Col <= 0 || Col >= 100)
	{
		goto Cl;
	}
	int *mass = CreateMass1(Col);
	RandMass(mass, Col);

	int Row2;
	int Col2;
	cout << endl << "¬ведите размер двухмерного масива." << endl;
	cout << "¬ведите размер строки : ";
	cin >> Row2;
	cout << "¬ведите размер столбца : ";
	cin >> Col2;
	int **Mass2 = CreateMass2(Row2, Col2);
	tranMass1in2(mass, Mass2, Col, Col2, Row2);
	OutMass2(Mass2, Col2, Row2);
	DelMass1(mass);
	DelMass2(Mass2, Col2);
	_getch();
	return;
}