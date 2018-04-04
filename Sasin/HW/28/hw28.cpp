#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;
int *CreateMass(int size)
{
	int *mass = nullptr;
	mass = new int[size];
	return mass;
}
void InitMass(int *mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 50;
	}
}
void OutMass(int *mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
}
void DeleteMass(int *mass)
{
	delete[]mass;
}
void MaxElMass(int *mass, int size)
{
	int max = mass[0];
	for(int i = 1; i < size; i++)
	{
		if (max < mass[i])
		{
			max = mass[i];
		}
	}
	cout << "Максимального элемента массива : " << max;
}
void MinElMass(int *mass, int size)
{
	int min = mass[0];
	for (int i = 1; i < size; i++)
	{
		if (min > mass[i])
		{
			min = mass[i];
		}
	}
	cout << "Минимальный элемента массива : " << min;
}
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(nullptr));
	int *mass = nullptr;
	int size;
	s: cout << "Введиете размер массива : ";
	cin >> size;
	if (size <= 0 || size > 250)
	{
		goto s;
	}
	mass=CreateMass(size);
	InitMass(mass, size);
	cout << "Массив : ";
	OutMass(mass, size);
	cout << endl;
	MaxElMass(mass, size);
	cout << endl;
	MinElMass(mass, size);
	DeleteMass(mass);

	_getch();
	return;
}