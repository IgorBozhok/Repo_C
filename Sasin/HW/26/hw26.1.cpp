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
void FlagBMassA(int *massA, int *massB, int N,int M, int &a)
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
	cout << "Массив А: " ;
	OutMass(massA, N);
	cout << "Массив В: ";
	OutMass(massB, M);
	DelelMass(massA, N);
	int a = 0;
	FlagBMassA(massA, massB, N, M, a);
	DelelMass(massA, N);
	for (int i = 0; i < N; i++)
	{
		if (massA[i] == -11)
		{
			for (int j = i; j < N - 1; j++)
			{
				massA[j] = massA[j + 1];
			}
		}
	}
	int *mass3 =new int[N-1];
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i; j < N-1; j++)
		{
			mass3[i] = massA[i];
		}
	}
	cout << "Массив в  котором элементы массива A не включаются в массив B, без повторений : ";
	OutMass(mass3, N-1);
	delete[]massA;
	delete[]massB;
	delete[]mass3;
	_getch();
	return;
}