#include <conio.h>
#include <time.h>
#include <iostream>
#include <stdio.h>

using namespace std;
int init(int mass[5][5], int N, int M )
{
	int res;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			mass[i][j] = rand() % 10;
		}
	}
	res = mass[5][5];
	return res;
}
double init(double mass[5][5], int N, int M)
{
	double res;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			mass[i][j] = rand() % 20/10.0;
		}
	}
	res = mass[5][5];
	return res;
}
char init(char mass[5][5], int N, int M)
{
	char res;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			mass[i][j] = (char)rand() % 100 + 50;
		}
	}
	res = mass[5][5];
	return res;
}

void out(int mass[5][5], int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
}
void out(double mass[5][5], int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
}
void out(char mass[5][5], int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
}

void max(int mass[5][5], int N, int M)
{
	int max = mass[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (max < mass[i][j])
			{
				max = mass[i][j];
			}
		}
	}
	cout << "Максимальный элемент 1 матрицы "<< max;
}
void max(double mass[5][5], int N, int M)
{
	double max = mass[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (max < mass[i][j])
			{
				max = mass[i][j];
			}
		}
	}
	cout << "Максимальный элемент 2 матрицы " << max;
}
void max(char mass[5][5], int N, int M)
{
	char max = mass[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (max < mass[i][j])
			{
				max = mass[i][j];
			}
		}
	}
	cout << "Максимальный элемент 3 матрицы " << max;
}

void min(int mass[5][5], int N, int M)
{
	int min = mass[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (min > mass[i][j])
			{
				min = mass[i][j];
			}
		}
	}
	cout << "Минимальный элемент 1 матрицы : " << min;
}
void min(double mass[5][5], int N, int M)
{
	double min = mass[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (min > mass[i][j])
			{
				min = mass[i][j];
			}
		}
	}
	cout << "Минимальный элемент 2 матрицы : " << min;
}
void min(char mass[5][5], int N, int M)
{
	char min = mass[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (min > mass[i][j])
			{
				min = mass[i][j];
			}
		}
	}
	cout << "Минимальный элемент 3 матрицы : " << min;
}

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(nullptr));
	int mass[5][5];
	double mass1[5][5];
	char mass2[5][5];
	mass[5][5] = init(mass, 5, 5);
	mass1[5][5] = init(mass1, 5, 5);
	mass2[5][5] = init(mass2, 5, 5);
	out(mass, 5, 5);
	cout << endl;
	out(mass1, 5, 5);
	cout << endl;
	out(mass2, 5, 5);
	cout << endl;
	max(mass, 5, 5);
	cout << endl;
	max(mass1, 5, 5);
	cout << endl;
	max(mass2, 5, 5);
	cout << endl;
	min(mass, 5, 5);
	cout << endl;
	min(mass1, 5, 5);
	cout << endl;
	min(mass2, 5, 5);
	_getch();
	return;
}