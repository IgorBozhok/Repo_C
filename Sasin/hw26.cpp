#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string.h>

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
void DelelMassA(int *massA, int &N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (massA[i] == massA[j])
			{
				for (int k = j; k < N - 1; k++)
				{
					massA[k] = massA[k + 1];
				}
				N--;
			}
			if (massA[i] == massA[j])
			{
				j--;
			}
		}
	}
}
void DelelBMassA(int *massA, int *massB, int N,int M, int &a)
{
	for (int i = 0; i < (N - a); i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (massA[i] == massB[j])
			{
				for (int k = i; k < (N - i); k++)
				{
					massA[k] = massA[k + 1];
				}
				a++;
			}
			if (massA[i] == massB[j])
			{
				j--;
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
	cout << endl;
	DelelMassA(massA, N);
	int* masstmp = new int[N];
	for (int i = 0; i < N; i++)
	{
		masstmp[i] = massA[i];
		cout << masstmp[i]<<" ";
	}

	cout << endl;

	int a = 0;

	for (int i = 0; i < (N); i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (masstmp[i] == massB[j])
			{
				for (int k = i; k < N; k++)
				{
					masstmp[k] = masstmp[k + 1];
					cout << masstmp[k] << " ";
				}
				a++;
				cout << endl;
			}
		}
	}
	
	for (int i = 0; i < N-a; i++)
	{
		cout << masstmp[i] << " ";
	}
	cout << endl;
	cout << a ;
	cout << endl;
	//DelelBMassA(massA, massB, N, M, a);
	//int *mass3 =new int[N-a];
	//for (int i = 0; i < N-a; i++)
	//{
	//	mass3[i] = massA[i];
	//}
	//cout << "Массив в  котором элементы массива A не включаются в массив B, без повторений : ";
	//OutMass(mass3, N-a);
	delete[]massA;
	delete[]massB;
	//delete[]mass3;
	_getch();
	return;
}