#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

void IniTmass(int mass[],int size)
{
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 10;
	}
}
void IniTmassDrob(double mass[], int size)
{
	for (int i = 0; i < size; i++)
	{
		mass[i] = double(rand() % 100/10.0);
	}
}
void OuTmass(int mass[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
}
void OoTmassDrob(double mass[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
}
int MiN(int mass[], int size)
{
	int min = mass[0];
	for (int i = 0; i < size; i++)
	{
		if (min > mass[i])
			min = mass[i];
	}
	return min;
}
int Max(int mass[], int size)
{
	int max = mass[0];
	for (int i = 0; i < size; i++)
	{
		if (max < mass[i])
			max = mass[i];
	}
	return max;
}
double MiNDrob(double mass[], int size)
{
	double min=mass[0];
	for (int i = 0; i < size; i++)
	{
		if (min > mass[i])
			min = mass[i];	
	}
	return min;
}
double MaxDrob(double mass[], int size)
{
	double max = mass[0];
	for (int i = 0; i < size; i++)
	{
		if (max < mass[i])
			max = mass[i];
	}
	return max;
}
void sort(int mass[], int size)
{

}




