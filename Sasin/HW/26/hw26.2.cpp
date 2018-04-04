#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int initMass(int *mass, int size)
{
	int res;
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 10 - rand() % 10;
	}
	cout << endl;
	res = mass[size];
	return res;
}
void OutMass(int *mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
}
void DelelMass(int *mass, int &N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (mass[i] == mass[j])
			{
				for (int k = j; k < N - 1; k++)
				{
					mass[k] = mass[k + 1];
				}
				N--;
			}
			if (mass[i] == mass[j])
			{
				j--;
			}
		}
	}
}
void FlagMass(int *massA, int *massB, int N, int M, int &a)
{
	int flag = -11;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (massA[i] == massB[j])
			{
				{
					massA[i] = flag;
				}
				a++;
			}
		}
	}
}


void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(nullptr));
	int N, M;
	cout << "Введите размеры массивов." << endl;
	cout << "Введите размер 1 массива : ";
	cin >> N;
	cout << "Введите размеры массивов." << endl;
	cout << "Введите размер 2 массива : ";
	cin >> M;

	int *massA = new int[N];
	int *massB = new int[M];
	initMass(massA, N);
	initMass(massB, M);
	cout << "Массив А: ";
	OutMass(massA, N);
	cout << "Массив В: ";
	OutMass(massB, M);
	DelelMass(massA, N);
	DelelMass(massB, M);
	int a = 0; // Счетчик количества совпадений маркированных элементов в массиве
	FlagMass(massA, massB, N, M, a);
	DelelMass(massA, N);
	for (int i = 0; i < N; i++)
	{
		if (massA[i] == -11)
		{
			for (int j = i; j < N ; j++)
			{
				massA[j] = massA[j + 1];
			}
		}
	}
	int size3 = (N-1) + M;
	int *mass3 = new int[size3];

	for (int i = 0; i < N-1; i++)
	{
		mass3[i] = massA[i];
	}
	int i, j;
	for (i = N - 1, j = 0; i < size3; i++, j++)
	{
		mass3[i] = massB[j];
	}
	cout << "Массив 3 где элементы массивов A и B не являются общими для них, без повторений: ";
	OutMass(mass3, size3);
	
	_getch();
	return;
}