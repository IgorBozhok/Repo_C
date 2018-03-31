
#include <conio.h>
#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;
void  main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int *mass = new int[10];
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 100;
		cout << "mass[" << i << "] = "<<mass[i] << endl;
	}
	cout << endl;
	int tmp ;
	for (int i = 0; i < 10; i++)
	{
		int a = 0;
		for (int j = 0; j < 9-i; j++)
		{
			if (mass[j] > mass[j+1])
			{
				tmp = mass[j];
				mass[j] = mass[j+1];
				mass[j+1] = tmp;
				a++;
			}
		}
		cout << a << " ";
		if (a == 0)
		{
			break;
		}
		
	}

	cout << endl;
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "mass[" << i << "] = " << mass[i] << endl;
	}


	_getch();
	return ;
}