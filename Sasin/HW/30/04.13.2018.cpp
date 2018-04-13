#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5

using namespace std;

int max(int* A, int* B,int size);
int min(int* A, int* B, int size);
int avg(int* A, int* B, int size);
int Action(int (*ptr)(int*, int*, int), int* A, int* B, int size);

void main(void)
{
	srand(time(nullptr));
	int* A = new int[N];
	int* B = new int[N];
	int choice, res;
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 10 - rand() % 10;
		B[i] = rand() % 10 - rand() % 10;
	}
	cout << "Enter some number:" << endl;
	cout << "1. - max:" << endl;
	cout << "1. - min:" << endl;
	cout << "1. - avg:" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
			  res = Action(max, A, B, N);
			  cout << res;
			  break;
	}
	case 2:
	{
			  res = Action(min, A, B, N);
			  cout << res;
			  break;
	}
	case 3:
	{
			  res = Action(min, A, B, N);
			  cout << res;
			  break;
	}
	}

	_getch();
	return;
}
int max(int*A, int *B, int size)
{
	int  maxElem = A[0];
	for (int i = 0; i < size; i++)
	{
		if (maxElem < A[i])
		{
			maxElem = A[i];
		}
		if (maxElem < B[i])
		{
			maxElem = B[i];
		}
	}
	return maxElem;
}
int min(int*A, int *B, int size)
{
	int  minElem = A[0];
	for (int i = 0; i < size; i++)
	{
		if (minElem > A[i])
		{
			minElem = A[i];
		}
		if (minElem > B[i])
		{
			minElem = B[i];
		}
	}
	return minElem;
}
int avg(int*A, int *B, int size)
{
	int  resAVG = 0;
	for (int i = 0; i < size; i++)
	{
		resAVG += (A[i] + B[i]);
	}
	resAVG /= (size * 2);
	return resAVG;
}


int Action(int(*ptr)(int*, int*, int), int* A, int* B, int size)
{

	int res = 0;
	res = ptr(A, B, size);
	return res;
}
