#include <time.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
double rand(double mass[], int size)
{
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 20 / 10.0;
	}
	return mass[size];
}
void init(double mass[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
}
double res1(double mass[], int size)
{
	double res = 0.0;
	for (int i = 0; i < size; i++)
	{
		res = res + mass[i];
	}
	res = res / size;
	return res;
}


void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(nullptr));
	int size;
	double res;
	cout << "¬ведите размер масива : ";
	cin >> size;
	double *mass;
	mass = new double[size];
	mass[size] = rand(mass, size);
	init(mass, size);
	res1(mass, size);
	res = res1(mass, size);
	cout << endl;
	cout << "Cреднее арифметическое элементов дробного массива : " << res;
	delete []mass;
	_getch();
	return;
}