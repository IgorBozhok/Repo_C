#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include "step1.h"

using namespace std;

// -захват памяти двухмерного массива;

int **CreateMass2(int sizeI, int sizeJ)
{
	int **ptr = nullptr;
	ptr = new int*[sizeI];

	for (int i = 0; i < sizeI; i++)

	{
		ptr[i] = new int[sizeJ];
	}

	return ptr;
}
// -захват памяти одномерного массива;

int *CreateMass1(int size)
{
	int *ptr = new int[size];
	return ptr;
}

// - random;

void RandMass2(int **ptr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			ptr[i][j] = rand() % 10-rand()%10;
		}
	}
}

// -ввывод двухмерного массива;

void OutMass2(int **ptr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}
}

// -ввывод одномерного массива;

void OutMass1(int *ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
			cout << ptr[i] << " ";
	}
}

// -- Создание одномерного массива с положительными элементами

void PlusMass(int **mass2, int sizeI, int sizeJ, int *mass1, int size)
{
	int k = 0;
	for (int i = 0; i < sizeJ; i++)
	{
		for (int j = 0; j < sizeI; j++)
		{
			if (mass2[i][j] > 0)
			{
				mass1[k] = mass2[i][j];
				k++;
			}
		}
	}
}


