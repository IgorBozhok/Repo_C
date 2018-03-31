#include <time.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;


int **createMass1(int Col, int Row)
{
	int**mass1;
	mass1 = new int*[Col];
	for (int i = 0; i < Col; i++)
	{
		mass1[i] = new int[Row];
	}
	return mass1;
}
int **createMass2(int Col, int Row)
{
	int**mass2;
	mass2 = new int*[Col];
	for (int i = 0; i < Col; i++)
	{
		mass2[i] = new int[Row];
	}
	return mass2;
}
int **createMass3(int Col, int Row)
{
	int**mass3;
	mass3 = new int*[Col];
	for (int i = 0; i < Col; i++)
	{
		mass3[i] = new int[Row];
	}
	return mass3;
}
void random(int ** mass1, int ** mass2, int Col, int Row)
{
	for (int i = 0; i < Col; i++)
	{
		for (int j = 0; j < Row; j++)
		{
			mass1[i][j] = rand() % 10;
			mass2[i][j] = rand() % 10;
		}
	}
}
void init(int ** mass1, int ** mass2, int Col, int Row)
{
	for (int i = 0; i < Col; i++)
	{
		for (int j = 0; j < Row; j++)
		{
			cout << mass1[i][j]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < Col; i++)
	{
		for (int j = 0; j < Row; j++)
		{
			cout << mass2[i][j] << " ";
		}
		cout << endl;
	}
}
void Summ(int ** mass1, int ** mass2, int **mass3,  int Col, int Row)
{
	for (int i = 0; i < Col; i++)
	{
		for (int j = 0; j < Row; j++)
		{
			mass3[i][j] = mass1[i][j] + mass2[i][j];
		}
	}
}
void initmass3(int ** mass3, int Col, int Row)
{
	for (int i = 0; i < Col; i++)
	{
		for (int j = 0; j < Row; j++)
		{
			cout << mass3[i][j] << " ";
		}
		cout << endl;
	}
}
void del(int **mass1, int**mass2, int**mass3, int Col)
{
		for (int i = 0; i < Col; i++)
		{
			delete[]mass1[i];
			delete[]mass2[i];
			delete[]mass3[i];
		}
		delete[]mass1;
		delete[]mass2;
		delete[]mass3;
}
	void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(nullptr));
	int Row;
	int Col;
	cout << "¬ведите размер двухмерного масива." << endl;
	cout << "¬ведите размер столбца : ";
	cin >> Row;
	cout << "¬ведите размер р€да : ";
	cin >> Col;
	int **mass1 = createMass1(Col, Row);
	int **mass2 = createMass2(Col, Row);
	int **mass3 = createMass3(Col, Row);
	random(mass1, mass2, Col, Row);
	cout << endl;
	init(mass1, mass2, Col, Row);
	cout << endl;
	Summ(mass1, mass2, mass3, Col, Row);
	initmass3(mass3, Col, Row);
	del(mass1, mass2, mass3, Col);
	_getch();
	return;
}