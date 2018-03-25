#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int arr1[10];
	int arr2[5];
	int arr3[5];
	for (int i = 0; i < 10; ++i) 
	{
		arr1[i] = rand() % 2000;
		cout << "arr[" << i << "] - " << arr1[i] << endl;
	}

	int tmp;
	tmp = 0;

	for (int i = 0; i < 5; ++i) 
	{
		arr2[i] = arr1[tmp];
		tmp = tmp + 2;
	}
	int tmp1;
	tmp1 = 1;

	for (int i = 0; i < 5; ++i) 
	{
		arr3[i] = arr1[tmp1];
		tmp1 = tmp1 + 2;
	}

	cout << endl;
	for (int i = 0; i < 5; ++i) 
	{
		cout << "arr2[" << i << "] - " << arr2[i] << endl;
	}

	cout << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << "arr3[" << i << "] - " << arr3[i] << endl;
	}
	_getch();
	return;
}