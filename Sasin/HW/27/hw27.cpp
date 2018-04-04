#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>

using namespace std;

void RandMass(int *mass, int N)
{
	for (int i = 0; i < N; i++)
	{
		mass[i] = rand() % 50;
	}
}
void OutMass(int *mass, int N)
{
	for (int i = 0; i < N; i++)
	{
		cout<< mass[i] <<" ";
	}
}
void EvenEl(int *mass, int *masstmp, int N, int &counter)
{
	for (int i = 0; i < N; i++)
	{
		if (mass[i] % 2 == 0)
		{
			masstmp[counter] = mass[i];
			counter++;
		}
	}
}
void UnevenEl(int *mass, int *masstmp, int N, int &counter)
{
	for (int i = 0; i < N; i++)
	{
		if (mass[i] % 2 != 0)
		{
			masstmp[counter] = mass[i];
			counter++;
		}
	}
}

void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(nullptr));
	int N, choice;
	int counter = 0;
	cout << "Есть массив А :" << endl;
	n: cout << "Введите его размер : ";
	cin >> N;
	if (N <= 0 || N > 250)
	{
		goto n;
	}
	cout << "1. Вывести все четные элементы массив А." << endl;
	cout << "2. Вывести все нечетные элементы массив А." << endl;
	cho: cout << "Ваш выбор : ";
	cin >> choice;
	if (choice <= 0 || choice > 2)
	{
		goto cho;
	}
	int *massA = new int[N];
	int *masstmp = new int[N];
	RandMass(massA, N);
	OutMass(massA, N);
	cout << endl;
	switch (choice)
	{
	case 1:
	{
		EvenEl(massA, masstmp, N, counter);
		cout << "Четные элементы массива А : ";
		OutMass(masstmp, counter);
		break;
	}
	case 2:
	{
		UnevenEl(massA, masstmp, N, counter);
		cout << "Нечетные элементы массива А : ";
		OutMass(masstmp, counter);
		break;
	}
	}

	_getch();
	return;
}