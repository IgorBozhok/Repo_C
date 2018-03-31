#include <conio.h>
#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;
void  main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int *mass1 = new int[1000];
	int *mass2 = new int[1000];
	int *mass3 = new int[1000];
	for (int i = 0; i < 10; i++)
	{
		mass1[i] = rand() % 1000;
		mass2[i] = rand() % 1000;
		mass3[i] = rand() % 1000;
	}
	cout << endl;
	cout << "Даны 3 сортировки по 1000 элементов : " << endl;
	cout << "3. ." << endl;

	// Сортировка пузырьком

	clock_t time;
	time = clock();
	int tmp;
	for (int i = 0; i < 1000; i++)
	{
		int a = 0;
		for (int j = 0; j < 999 - i; j++)
		{
			if (mass1[j] > mass1[j + 1])
			{
				tmp = mass1[j];
				mass1[j] = mass1[j + 1];
				mass1[j + 1] = tmp;
			}
		}
	}
	time = clock() - time;
	cout << "1. Сортировка пузырьком = " <<(double)time / CLOCKS_PER_SEC;

	//  Сортировка вставками
	
	clock_t time1;
	time1 = clock();
	int j= 0;
	for (int i = 0; i < 1000; i++)
	{
		tmp = mass2[i];

		for (j = i - 1; j >= 0 && mass2[j] > tmp; j--)
		{
			mass2[j + 1] = mass2[j];
		}
		mass2[j + 1] = tmp;
	}
	time = clock() - time;
	cout << endl;
	cout << "2. Сортировка вставками = " << (double)time / CLOCKS_PER_SEC;

	// Сортировка выбором

	clock_t time2;
	time2 = clock();
	for (int i = 0; i < 999; i++)
	{
		tmp = mass3[i];
		int tempI = i;
		for (int j = i; j < 10; j++)
		{
			if (tmp > mass3[j])
			{
				tempI = j;
				tmp = mass3[j];
			}
		}
		mass3[tempI] = mass3[i];
		mass3[i] = tmp;
	}
	time = clock() - time;
	cout << endl;
	cout << "3. Сортировка выбором = " << (double)time / CLOCKS_PER_SEC;
	
	_getch();
	return;
}