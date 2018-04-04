#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

void MinMax(int **mass1, int N, int M)
{
	int max = 0;
	int maxelN = 0;
	int maxelM = 0;
	int min = 100000;
	int minelN = 0;
	int minelM = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (max < mass1[i][j])
			{
				max = mass1[i][j];
				maxelN = i;
				maxelM = j;
			}
			else if (min > mass1[i][j])
			{
				min = mass1[i][j];
				minelN = i;
				minelM = j;
			}
		}
	}
	cout << " Максимальное число : " << max << " И его номер [" << maxelN << "][" << maxelM<<"]" << endl;
	cout << " Минимальное число : " << min << " И его номер [" << minelN << "][" << minelM << "]" << endl;
}
void MinMax(double **mass2, int N, int M)
{
	double max = 0.0;
	int maxelN = 0;
	int maxelM = 0;
	double min = 100000.0;
	int minelN = 0;
	int minelM = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (max < mass2[i][j])
			{
				max = mass2[i][j];
				maxelN = i;
				maxelM = j;
			}
			else if (min > mass2[i][j])
			{
				min = mass2[i][j];
				minelN = i;
				minelM = j;
			}
		}
	}
	cout << " Максимальное число : " << max << " И его номер [" << maxelN << "][" << maxelM << "]" << endl;
	cout << " Минимальное число : " << min << " И его номер [" << minelN << "][" << minelM << "]" << endl;
}

void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(nullptr));
	int N, M;
	cout << "Введите кол-во строк в массиве: ";
	cin >> N;
	cout << "Введите кол-во столбцов в массиве: ";
	cin >> M;
	int **mass1 = new int*[N];
	double **mass2 = new double*[N];
	for (int i = 0; i < M; i++)
	{
		mass1[i] = new int[M];
		mass2[i] = new double[M];
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			mass1[i][j] = rand() % 50;
			mass2[i][j] = rand() % 100 / 10.0;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << mass1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << mass2[i][j] << " ";
		}
		cout << endl;
	}

	MinMax(mass1, N, M);
	cout << endl;
	MinMax(mass2, N, M);
	_getch();
	return;
}