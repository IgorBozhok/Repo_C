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

	int size = 0;
	cout << "¬ведите размер массива : ";
	cin >> size;
	int* arr = new int[size];
	int* arr1 = new int[size];
	int* arr2 = new int[size];
	for (int i = 0; i <size; ++i)
	{
		arr[i] = rand() % 2000;
		arr1[i] = rand() % 2000;
	}
	
	for (int i = 0; i < size; ++i) 
	{
		arr[i] = rand() % 2000;
		cout << "arr[" << i << "] - " << arr[i] << endl;
	}

	cout << endl;
	for (int i = 0; i < size ; ++i)
	{
		arr1[i] = rand() % 2000;
		cout << "arr1[" << i << "] - " << arr1[i] << endl;
	}

	cout << endl;
	for (int i = 0; i < size; i++) {
		arr2[i] = arr[i] + arr1[i];
		cout << "arr[" << i << "] + arr1["<< i << "] = " << arr2[i] << endl;
	}

	_getch();
	return;
}